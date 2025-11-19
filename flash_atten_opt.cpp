//===============================================================
// FlashAttention - FIXED & VERIFIED VERSION
// Priority: Correctness > Area > Latency
// Fixes: Logic errors, Memory Port Conflicts, Complex Indexing
//===============================================================
#include <hls_stream.h>
#include <ap_int.h>
#include <stdint.h>
#include <math.h>
#include <hls_math.h>

#define EXP(x) hls::expf(x)
#define SQRT(x) hls::sqrtf(x)

typedef ap_uint<32> bit32_t;

static const int BATCH_SIZE      = 4;
static const int CONTEXT_LENGTH  = 16;
static const int HIDDEN_SIZE     = 64;
static const int NUM_HEADS       = 4;
static const int HEAD_DIM        = HIDDEN_SIZE / NUM_HEADS; // 16

static const int THREE_H   = 3 * HIDDEN_SIZE;
static const int IN_ELEMS  = BATCH_SIZE * CONTEXT_LENGTH * THREE_H;
static const int OUT_ELEMS = BATCH_SIZE * CONTEXT_LENGTH * NUM_HEADS * HEAD_DIM;

static const int BLOCK_T = 4;

extern "C" {

// ------------------------------------------------------------
// Load Q/K/V - Reverted to Nested Loops for Safety
// ------------------------------------------------------------
static void load_qkv(
  const float input_data[IN_ELEMS],
  float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM])
{
  // Parallelizing the innermost operations logic instead of manual flattening
  // allows HLS to infer the correct address logic without integer division bugs.
  
  int idx = 0;
  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int t = 0; t < CONTEXT_LENGTH; ++t) {
      for (int c = 0; c < THREE_H; ++c) {
        #pragma HLS PIPELINE II=1
        float x = input_data[idx++];

        if (c < HIDDEN_SIZE) {
          // Q
          int h = c / HEAD_DIM;
          int d = c % HEAD_DIM;
          Q[b][h][t][d] = x;
        } else if (c < 2 * HIDDEN_SIZE) {
          // K
          int cl = c - HIDDEN_SIZE;
          int h = cl / HEAD_DIM;
          int d = cl % HEAD_DIM;
          K[b][h][t][d] = x;
        } else {
          // V
          int cl = c - 2 * HIDDEN_SIZE;
          int h = cl / HEAD_DIM;
          int d = cl % HEAD_DIM;
          V[b][h][t][d] = x;
        }
      }
    }
  }
}

// ------------------------------------------------------------
// FlashAttention Core
// ------------------------------------------------------------
static void flash_attention(
  float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM])
{
  // === CRITICAL FIX: ARRAY PARTITIONING ===
  // To allow BLOCK_T=4 unrolling, we MUST be able to access 4 distinct time-steps (t)
  // of K and V simultaneously. Without 'dim=3' partitioning, this causes collisions.
  
  // Head Dim (Dim 4): Complete
  #pragma HLS ARRAY_PARTITION variable=Q complete dim=4
  #pragma HLS ARRAY_PARTITION variable=K complete dim=4
  #pragma HLS ARRAY_PARTITION variable=V complete dim=4
  #pragma HLS ARRAY_PARTITION variable=OUT complete dim=4

  // Time Dim (Dim 3): Cyclic factor=4 (Parallel Tile Access)
  #pragma HLS ARRAY_PARTITION variable=K cyclic factor=4 dim=3
  #pragma HLS ARRAY_PARTITION variable=V cyclic factor=4 dim=3

  float scale = 1.0f / SQRT((float)HEAD_DIM);

  // 1. Loop Batch
  for (int b = 0; b < BATCH_SIZE; ++b) {
    // 2. Loop Heads (Serial to save Area)
    for (int h = 0; h < NUM_HEADS; ++h) {
      // 3. Loop Query Time
      for (int tq = 0; tq < CONTEXT_LENGTH; ++tq) {
        
        float m_i = -1e30f;
        float l_i = 0.0f;
        float out_vec[HEAD_DIM];
        #pragma HLS ARRAY_PARTITION variable=out_vec complete dim=1

        // Init Accumulator
        for(int d=0; d<HEAD_DIM; ++d) {
            #pragma HLS UNROLL
            out_vec[d] = 0.0f;
        }

        // 4. Loop Tile (Keys)
        loop_tiles: 
        for (int tk0 = 0; tk0 < CONTEXT_LENGTH; tk0 += BLOCK_T) {
          #pragma HLS PIPELINE II=12
          // Increased II slightly to allow complex float update logic to settle.

          float scores_tile[BLOCK_T];
          #pragma HLS ARRAY_PARTITION variable=scores_tile complete

          // --- Step A: Parallel Dot Product ---
          // Reads 4x K vectors simultaneously (Enabled by Partitioning dim=3)
          compute_scores:
          for (int tj = 0; tj < BLOCK_T; ++tj) {
              #pragma HLS UNROLL
              int tk = tk0 + tj;
              float dot = 0.0f;
              for (int d = 0; d < HEAD_DIM; ++d) {
                  #pragma HLS UNROLL
                  dot += Q[b][h][tq][d] * K[b][h][tk][d];
              }
              scores_tile[tj] = dot * scale;
          }

          // --- Step B: Max Tracking & Scaling Factor ---
          float tile_max = -1e30f;
          for(int tj=0; tj<BLOCK_T; ++tj) {
              #pragma HLS UNROLL
              if(scores_tile[tj] > tile_max) tile_max = scores_tile[tj];
          }

          float m_prev = m_i;
          float m_new = (tile_max > m_prev) ? tile_max : m_prev;
          
          // Robust Alpha calculation: if l_i is 0 (start), force alpha to 0 to reset history
          float alpha = (l_i == 0.0f) ? 0.0f : EXP(m_prev - m_new);

          float exp_vals[BLOCK_T];
          float tile_sum = 0.0f;
          for(int tj=0; tj<BLOCK_T; ++tj) {
              #pragma HLS UNROLL
              exp_vals[tj] = EXP(scores_tile[tj] - m_new);
              tile_sum += exp_vals[tj];
          }

          float l_new = alpha * l_i + tile_sum;

          // --- Step C: Output Accumulation ---
          // Reads 4x V vectors simultaneously (Enabled by Partitioning dim=3)
          for (int d = 0; d < HEAD_DIM; ++d) {
              #pragma HLS UNROLL
              float weighted_sum = 0.0f;
              for(int tj=0; tj<BLOCK_T; ++tj) {
                  #pragma HLS UNROLL
                  int tk = tk0 + tj;
                  weighted_sum += exp_vals[tj] * V[b][h][tk][d];
              }
              out_vec[d] = out_vec[d] * alpha + weighted_sum;
          }

          // Commit
          m_i = m_new;
          l_i = l_new;
        }

        // Write back normalized
        float inv_l = 1.0f / (l_i + 1e-9f);
        for (int d = 0; d < HEAD_DIM; ++d) {
          #pragma HLS UNROLL
          OUT[b][h][tq][d] = out_vec[d] * inv_l;
        }
      }
    }
  }
}

// ------------------------------------------------------------
// Store Output - Reverted to Nested Loops
// ------------------------------------------------------------
static void store_output(
  const float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float output_data[OUT_ELEMS])
{
  int idx = 0;
  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int t = 0; t < CONTEXT_LENGTH; ++t) {
      for (int h = 0; h < NUM_HEADS; ++h) {
        for (int d = 0; d < HEAD_DIM; ++d) {
          #pragma HLS PIPELINE II=1
          output_data[idx++] = OUT[b][h][t][d];
        }
      }
    }
  }
}

void dut(hls::stream<bit32_t> &strm_in, hls::stream<bit32_t> &strm_out) {
  #pragma HLS INTERFACE axis port=strm_in
  #pragma HLS INTERFACE axis port=strm_out
  #pragma HLS INTERFACE ap_ctrl_none port=return

  // Standard buffers, no complex cyclic partitioning on the big buffer
  float input_data[IN_ELEMS];
  float output_data[OUT_ELEMS];

  // Fill Buffer
  for (int i = 0; i < IN_ELEMS; ++i) {
    #pragma HLS PIPELINE II=1
    bit32_t word = strm_in.read();
    union { uint32_t u; float f; } cvt;
    cvt.u = word;
    input_data[i] = cvt.f;
  }

  static float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];

  // Partition declarations moved inside functions or handled globally above
  
  #pragma HLS ARRAY_PARTITION variable=Q complete dim=4
  #pragma HLS ARRAY_PARTITION variable=OUT complete dim=4
  
  #pragma HLS ARRAY_PARTITION variable=K cyclic factor=4 dim=3
  #pragma HLS ARRAY_PARTITION variable=K complete dim=4
  #pragma HLS ARRAY_PARTITION variable=V cyclic factor=4 dim=3
  #pragma HLS ARRAY_PARTITION variable=V complete dim=4

  load_qkv(input_data, Q, K, V);
  flash_attention(Q, K, V, OUT);
  store_output(OUT, output_data);

  // Stream Out
  for (int i = 0; i < OUT_ELEMS; ++i) {
    #pragma HLS PIPELINE II=1
    union { uint32_t u; float f; } cvt;
    cvt.f = output_data[i];
    strm_out.write((bit32_t)cvt.u);
  }
}

} // extern "C"