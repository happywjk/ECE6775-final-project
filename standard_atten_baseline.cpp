//===============================================================
// Standard Attention (Honest Memory-Bound Implementation)
// ==============================================================
//===============================================================

#include <hls_stream.h>
#include <ap_int.h>
#include <stdint.h>
#include <math.h>

#ifdef __SYNTHESIS__
  #include <hls_math.h>
  #define EXP(x) hls::expf(x)
  #define SQRT(x) hls::sqrtf(x)
#else
  #define EXP(x) expf(x)
  #define SQRT(x) sqrtf(x)
#endif

typedef ap_uint<32> bit32_t;

static const int BATCH_SIZE      = 4;
static const int CONTEXT_LENGTH  = 16; 
static const int HIDDEN_SIZE     = 64;
static const int NUM_HEADS       = 4;
static const int HEAD_DIM        = HIDDEN_SIZE / NUM_HEADS; // 16

static const int THREE_H   = 3 * HIDDEN_SIZE;
static const int IN_ELEMS  = BATCH_SIZE * CONTEXT_LENGTH * THREE_H;
static const int OUT_ELEMS = BATCH_SIZE * CONTEXT_LENGTH * NUM_HEADS * HEAD_DIM;

static const int SCORE_ELEMS = BATCH_SIZE * NUM_HEADS * CONTEXT_LENGTH * CONTEXT_LENGTH;

extern "C" {

// ------------------------------------------------------------
static void load_qkv(
    const float input_data[IN_ELEMS],
    float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM]) 
{
  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int t = 0; t < CONTEXT_LENGTH; ++t) {
      for (int c = 0; c < THREE_H; ++c) {
        int idx = b * (CONTEXT_LENGTH * THREE_H) + t * THREE_H + c;
        float x = input_data[idx];
        if (c < HIDDEN_SIZE) {
          Q[b][c/HEAD_DIM][t][c%HEAD_DIM] = x;
        } else if (c < 2*HIDDEN_SIZE) {
          int cl = c - HIDDEN_SIZE;
          K[b][cl/HEAD_DIM][t][cl%HEAD_DIM] = x;
        } else {
          int cl = c - 2*HIDDEN_SIZE;
          V[b][cl/HEAD_DIM][t][cl%HEAD_DIM] = x;
        }
      }
    }
  }
}

// ------------------------------------------------------------
static void compute_scores_and_write_mem(
    float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float score_memory[SCORE_ELEMS]
) {
    const float scale = 1.0f / SQRT((float)HEAD_DIM);

    for (int b = 0; b < BATCH_SIZE; ++b) {
        for (int h = 0; h < NUM_HEADS; ++h) {
            for (int tq = 0; tq < CONTEXT_LENGTH; ++tq) {
                for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {

                    float dot = 0.0f;
                    for (int d = 0; d < HEAD_DIM; ++d) {
                        dot += Q[b][h][tq][d] * K[b][h][tk][d];
                    }

                    int idx = b*(NUM_HEADS*CONTEXT_LENGTH*CONTEXT_LENGTH) + 
                              h*(CONTEXT_LENGTH*CONTEXT_LENGTH) + 
                              tq*CONTEXT_LENGTH + tk;
                    score_memory[idx] = dot * scale;
                }
            }
        }
    }
}

// ------------------------------------------------------------
static void read_mem_and_softmax(
    float score_memory[SCORE_ELEMS],
    float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM]
) {
    float row_buffer[CONTEXT_LENGTH]; 

    for (int b = 0; b < BATCH_SIZE; ++b) {
        for (int h = 0; h < NUM_HEADS; ++h) {
            for (int tq = 0; tq < CONTEXT_LENGTH; ++tq) {
                
                float rmax = -1e30f;
                int base_idx = b*(NUM_HEADS*CONTEXT_LENGTH*CONTEXT_LENGTH) + 
                               h*(CONTEXT_LENGTH*CONTEXT_LENGTH) + 
                               tq*CONTEXT_LENGTH;

                for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
                    float s = score_memory[base_idx + tk];
                    if (s > rmax) rmax = s;
                    row_buffer[tk] = s;
                }

                float sum_exp = 0.0f;
                for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
                    float e = EXP(row_buffer[tk] - rmax);
                    row_buffer[tk] = e;
                    sum_exp += e;
                }

                float inv_sum = 1.0f / (sum_exp + 1e-9f);
                
                for (int d = 0; d < HEAD_DIM; ++d) {
                    float acc = 0.0f;
                    for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
                        acc += (row_buffer[tk] * inv_sum) * V[b][h][tk][d];
                    }
                    OUT[b][h][tq][d] = acc;
                }
            }
        }
    }
}

// ------------------------------------------------------------
static void store_output(
  const float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float output_data[OUT_ELEMS]) 
{
  for (int b = 0; b < BATCH_SIZE; ++b)
    for (int t = 0; t < CONTEXT_LENGTH; ++t)
      for (int h = 0; h < NUM_HEADS; ++h)
        for (int d = 0; d < HEAD_DIM; ++d) {
          int idx = (((b * CONTEXT_LENGTH + t) * NUM_HEADS + h) * HEAD_DIM + d);
          output_data[idx] = OUT[b][h][t][d];
        }
}

// ------------------------------------------------------------
// Top-Level DUT
// ------------------------------------------------------------
void dut(hls::stream<bit32_t> &strm_in,
         hls::stream<bit32_t> &strm_out)
{
  // #pragma HLS INTERFACE axis port=strm_in
  // #pragma HLS INTERFACE axis port=strm_out
  // #pragma HLS INTERFACE ap_ctrl_none port=return

  static float main_memory_in[IN_ELEMS];
  static float main_memory_out[OUT_ELEMS];
  
  static float main_memory_scores[SCORE_ELEMS]; 

  static float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];

  for (int i = 0; i < IN_ELEMS; ++i) {
    bit32_t w = strm_in.read();
    union {uint32_t u; float f;} cvt; cvt.u=w;
    main_memory_in[i] = cvt.f;
  }
  load_qkv(main_memory_in, Q, K, V);

  compute_scores_and_write_mem(Q, K, main_memory_scores);

  read_mem_and_softmax(main_memory_scores, V, OUT);

  store_output(OUT, main_memory_out);
  for (int i = 0; i < OUT_ELEMS; ++i) {
    union {uint32_t u; float f;} cvt; cvt.f=main_memory_out[i];
    strm_out.write((bit32_t)cvt.u);
  }
}

} // extern "C"
