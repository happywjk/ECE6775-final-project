//===============================================================
// Baseline Standard Attention Computation
// Includes Memory Simulation (Load -> Compute -> Store)
// Input:  input_data  [B, T, 3*H]  (flattened, Q | K | V)
// Output: output_data [B, T, NH, HD] (flattened)
//===============================================================
#include <hls_stream.h>
#include <math.h>
#include <stdint.h>
#ifdef __SYNTHESIS__
#include <hls_math.h>
#endif

typedef int8_t data_t;

static inline data_t float_to_int8(float v) {
    if (v > 127.0f)  return 127;
    if (v < -128.0f) return -128;
    return static_cast<data_t>(v);
}

static const int BATCH_SIZE      = 4;
static const int CONTEXT_LENGTH  = 16;
static const int HIDDEN_SIZE     = 64;
static const int NUM_HEADS       = 4;
static const int HEAD_DIM        = HIDDEN_SIZE / NUM_HEADS;

static const int THREE_H   = 3 * HIDDEN_SIZE;
static const int IN_ELEMS  = BATCH_SIZE * CONTEXT_LENGTH * THREE_H;              
static const int OUT_ELEMS = BATCH_SIZE * CONTEXT_LENGTH * NUM_HEADS * HEAD_DIM; 

extern "C" {

static inline float fast_exp(float x) {
  // Use HLS math if available, otherwise std math
  #ifdef __SYNTHESIS__
      return hls::expf(x);
  #else
      return expf(x);
  #endif
}

// ------------------------------------------------------------
// 1. Memory Simulation Modules
// ------------------------------------------------------------
static void write_mem(hls::stream<data_t> &strm_in, float local_ram[IN_ELEMS]) {
    for (int i = 0; i < IN_ELEMS; ++i) {
        #pragma HLS PIPELINE II=1
        data_t word = strm_in.read();
        local_ram[i] = static_cast<float>(word);
    }
}

static void read_mem(float local_ram[OUT_ELEMS], hls::stream<data_t> &strm_out) {
    for (int i = 0; i < OUT_ELEMS; ++i) {
        #pragma HLS PIPELINE II=1
        data_t quantized = float_to_int8(local_ram[i]);
        strm_out.write(quantized);
    }
}

// ------------------------------------------------------------
// 2. Logic Functions
// ------------------------------------------------------------
static void load_and_rearrange_qkv(
    const float input_data[IN_ELEMS],
    float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM]) {

  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int t = 0; t < CONTEXT_LENGTH; ++t) {
      for (int c = 0; c < THREE_H; ++c) {
        int idx = b * (CONTEXT_LENGTH * THREE_H) + t * THREE_H + c;
        float x = input_data[idx];

        if (c < HIDDEN_SIZE) {
          int h = c / HEAD_DIM;
          int d = c % HEAD_DIM;
          Q[b][h][t][d] = x;
        } else if (c < 2 * HIDDEN_SIZE) {
          int c_local = c - HIDDEN_SIZE;
          int h = c_local / HEAD_DIM;
          int d = c_local % HEAD_DIM;
          K[b][h][t][d] = x;
        } else {
          int c_local = c - 2 * HIDDEN_SIZE;
          int h = c_local / HEAD_DIM;
          int d = c_local % HEAD_DIM;
          V[b][h][t][d] = x;
        }
      }
    }
  }
}

static void compute_attention_baseline(
    float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM]) {

  const float inv_sqrt_d = 1.0f / sqrtf((float)HEAD_DIM);
  static float S[CONTEXT_LENGTH][CONTEXT_LENGTH];
  static float prow[CONTEXT_LENGTH];

  for (int b = 0; b < BATCH_SIZE; b++) {
    for (int h = 0; h < NUM_HEADS; h++) {

      // score matrix S = Q K^T / sqrt(d)
      for (int tq = 0; tq < CONTEXT_LENGTH; tq++) {
        for (int tk = 0; tk < CONTEXT_LENGTH; tk++) {
          float dot = 0.0f;
          for (int d = 0; d < HEAD_DIM; d++)
            dot += Q[b][h][tq][d] * K[b][h][tk][d];

          S[tq][tk] = dot * inv_sqrt_d;
        }
      }

      // softmax row-wise
      for (int tq = 0; tq < CONTEXT_LENGTH; tq++) {
        float rmax = -1e30f;

        for (int tk = 0; tk < CONTEXT_LENGTH; tk++)
          if (S[tq][tk] > rmax) rmax = S[tq][tk];

        float sum_exp = 0.0f;
        for (int tk = 0; tk < CONTEXT_LENGTH; tk++) {
          float e = fast_exp(S[tq][tk] - rmax);
          prow[tk] = e;
          sum_exp += e;
        }
        float inv_sum = 1.0f / (sum_exp + 1e-9f);

        for (int d = 0; d < HEAD_DIM; d++) {
          float acc = 0.0f;
          for (int tk = 0; tk < CONTEXT_LENGTH; tk++)
            acc += prow[tk] * inv_sum * V[b][h][tk][d];
          OUT[b][h][tq][d] = acc;
        }
      }
    }
  }
}

static void store_output(
  const float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float output_data[OUT_ELEMS]) {

  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int t = 0; t < CONTEXT_LENGTH; ++t) {
      for (int h = 0; h < NUM_HEADS; ++h) {
        for (int d = 0; d < HEAD_DIM; ++d) {
          int idx = (((b * CONTEXT_LENGTH + t) * NUM_HEADS + h) * HEAD_DIM + d);
          output_data[idx] = OUT[b][h][t][d];
        }
      }
    }
  }
}

// ------------------------------------------------------------
// 3. Top-level DUT
// ------------------------------------------------------------
void dut(hls::stream<data_t> &strm_in,
         hls::stream<data_t> &strm_out)
{
  #pragma HLS INTERFACE axis port=strm_in
  #pragma HLS INTERFACE axis port=strm_out
  #pragma HLS INTERFACE ap_ctrl_none port=return

  // MEMORY SIMULATION:
  // Declare static arrays to infer BRAM (On-Chip Memory)
  // This simulates the "Store all input first" requirement
  static float main_memory_in[IN_ELEMS];
  static float main_memory_out[OUT_ELEMS];

  // Internal Tensors
  static float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];

  // 1. DMA Write (Stream -> Memory)
  write_mem(strm_in, main_memory_in);

  // 2. Compute (Memory -> Logic -> Memory)
  load_and_rearrange_qkv(main_memory_in, Q, K, V);
  compute_attention_baseline(Q, K, V, OUT);
  store_output(OUT, main_memory_out);

  // 3. DMA Read (Memory -> Stream)
  read_mem(main_memory_out, strm_out);
}

} // extern "C"
