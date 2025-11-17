//===============================================================
// FlashAttention-Style Scaled Dot-Product Attention (Online Softmax)
// Interface: same as baseline (hls::stream<bit32_t> in/out)
// Input:  input_data  [B, T, 3*H] (flattened, Q | K | V) as 32-bit words
// Output: output_data [B, T, NH, HD] (flattened) as 32-bit words
//===============================================================
#include <hls_stream.h>
#include <ap_int.h>
#include <hls_math.h>
#include <math.h>
#include <stdint.h>

// Match lab style: 32-bit stream word
typedef ap_uint<32> bit32_t;

static const int BATCH_SIZE      = 4;
static const int CONTEXT_LENGTH  = 16;
static const int HIDDEN_SIZE     = 64;
static const int NUM_HEADS       = 4;
static const int HEAD_DIM        = HIDDEN_SIZE / NUM_HEADS;

static const int THREE_H   = 3 * HIDDEN_SIZE;
static const int IN_ELEMS  = BATCH_SIZE * CONTEXT_LENGTH * THREE_H;              // 12288
static const int OUT_ELEMS = BATCH_SIZE * CONTEXT_LENGTH * NUM_HEADS * HEAD_DIM; // 4096

// small tile for keys/values (FlashAttention-style block processing)
static const int BLOCK_T = 4;

extern "C" {

static inline float fast_exp(float x) {
  return hls::expf(x);
}

// ------------------------------------------------------------
// load Q,K,V from flat float input buffer
// input_data: [B * T * 3H]
// Q/K/V: [B][NH][T][HD]
// ------------------------------------------------------------
static void load_and_rearrange_qkv(
    const float input_data[IN_ELEMS],
    float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM]) {
#pragma HLS INLINE off
#pragma HLS ARRAY_PARTITION variable=Q complete dim=2
#pragma HLS ARRAY_PARTITION variable=K complete dim=2
#pragma HLS ARRAY_PARTITION variable=V complete dim=2

  const int BT_STRIDE = CONTEXT_LENGTH * THREE_H;

  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int t = 0; t < CONTEXT_LENGTH; ++t) {
#pragma HLS PIPELINE II=1
      for (int c = 0; c < THREE_H; ++c) {
        int idx = b * BT_STRIDE + t * THREE_H + c;
        float x = input_data[idx];

        if (c < HIDDEN_SIZE) {
          int c_local = c;
          int h  = c_local / HEAD_DIM;
          int d  = c_local % HEAD_DIM;
          Q[b][h][t][d] = x;
        } else if (c < 2 * HIDDEN_SIZE) {
          int c_local = c - HIDDEN_SIZE;
          int h  = c_local / HEAD_DIM;
          int d  = c_local % HEAD_DIM;
          K[b][h][t][d] = x;
        } else {
          int c_local = c - 2 * HIDDEN_SIZE;
          int h  = c_local / HEAD_DIM;
          int d  = c_local % HEAD_DIM;
          V[b][h][t][d] = x;
        }
      }
    }
  }
}

// ------------------------------------------------------------
// FlashAttention-style compute with online softmax
// OUT = softmax(QK^T / sqrt(d)) V
// but implemented with (m_i, l_i, out_vec) and tiles over tk
// ------------------------------------------------------------
static void compute_flash_attention(
    float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM]) {
#pragma HLS INLINE off
#pragma HLS ARRAY_PARTITION variable=Q   complete dim=2
#pragma HLS ARRAY_PARTITION variable=K   complete dim=2
#pragma HLS ARRAY_PARTITION variable=V   complete dim=2
#pragma HLS ARRAY_PARTITION variable=OUT complete dim=2

  const float scale = 1.0f / hls::sqrtf((float)HEAD_DIM);

  float scores_tile[BLOCK_T];
#pragma HLS ARRAY_PARTITION variable=scores_tile complete dim=1

  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int h = 0; h < NUM_HEADS; ++h) {
      for (int tq = 0; tq < CONTEXT_LENGTH; ++tq) {

        // Online softmax state for this (b,h,tq)
        float m_i = -1e30f;      // running max
        float l_i = 0.0f;        // running sum of exp
        float out_vec[HEAD_DIM]; // running accumulator
#pragma HLS ARRAY_PARTITION variable=out_vec complete dim=1

        // init accumulator
        for (int d = 0; d < HEAD_DIM; ++d) {
#pragma HLS UNROLL
          out_vec[d] = 0.0f;
        }

        // Process keys/values in tiles along tk
        for (int tk0 = 0; tk0 < CONTEXT_LENGTH; tk0 += BLOCK_T) {
          const int tile_len = (tk0 + BLOCK_T <= CONTEXT_LENGTH)
                             ? BLOCK_T
                             : (CONTEXT_LENGTH - tk0);

          // 1) Compute scores for this tile and find tile max
          float tile_max = -1e30f;
          for (int tj = 0; tj < tile_len; ++tj) {
#pragma HLS PIPELINE II=1
            int tk = tk0 + tj;
            float dot = 0.0f;
            for (int d = 0; d < HEAD_DIM; ++d) {
#pragma HLS UNROLL
              dot += Q[b][h][tq][d] * K[b][h][tk][d];
            }
            float s = dot * scale;
            scores_tile[tj] = s;
            if (s > tile_max) tile_max = s;
          }

          // 2) Update global max m_i
          float m_new = (tile_max > m_i) ? tile_max : m_i;

          // 3) Compute alpha for old state and init new accumulator
          float alpha = (l_i == 0.0f) ? 0.0f : fast_exp(m_i - m_new);
          float l_new = alpha * l_i;

          float new_out_vec[HEAD_DIM];
#pragma HLS ARRAY_PARTITION variable=new_out_vec complete dim=1
          for (int d = 0; d < HEAD_DIM; ++d) {
#pragma HLS UNROLL
            new_out_vec[d] = out_vec[d] * alpha;
          }

          // 4) Process tile: exp(scores - m_new), update l_new and out_vec
          for (int tj = 0; tj < tile_len; ++tj) {
#pragma HLS PIPELINE II=1
            int tk = tk0 + tj;
            float e = fast_exp(scores_tile[tj] - m_new);
            l_new += e;
            for (int d = 0; d < HEAD_DIM; ++d) {
#pragma HLS UNROLL
              new_out_vec[d] += e * V[b][h][tk][d];
            }
          }

          // 5) Commit updated state
          m_i = m_new;
          l_i = l_new;
          for (int d = 0; d < HEAD_DIM; ++d) {
#pragma HLS UNROLL
            out_vec[d] = new_out_vec[d];
          }
        } // end tiles over tk

        // 6) Normalize final accumulator by l_i
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
// Store output
// ------------------------------------------------------------
static void store_output(
  const float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float output_data[OUT_ELEMS]) {
#pragma HLS INLINE off
  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int t = 0; t < CONTEXT_LENGTH; ++t) {
      for (int h = 0; h < NUM_HEADS; ++h) {
#pragma HLS PIPELINE II=1
        for (int d = 0; d < HEAD_DIM; ++d) {
          int idx = (((b * CONTEXT_LENGTH + t) * NUM_HEADS + h) * HEAD_DIM + d);
          output_data[idx] = OUT[b][h][t][d];
        }
      }
    }
  }
}

// ------------------------------------------------------------
// Top-level DUT: stream interface (unchanged)
// ------------------------------------------------------------
void dut(hls::stream<bit32_t> &strm_in,
         hls::stream<bit32_t> &strm_out)
{
  float input_data[IN_ELEMS];
  float output_data[OUT_ELEMS];

  // Read IN_ELEMS floats from 32-bit stream
  for (int i = 0; i < IN_ELEMS; i++) {
#pragma HLS PIPELINE II=1
    bit32_t word = strm_in.read();
    union {
      uint32_t u;
      float    f;
    } cvt;
    cvt.u = (uint32_t)word;
    input_data[i] = cvt.f;
  }

  static float Q  [BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float K  [BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float V  [BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];

#pragma HLS ARRAY_PARTITION variable=Q   complete dim=2
#pragma HLS ARRAY_PARTITION variable=K   complete dim=2
#pragma HLS ARRAY_PARTITION variable=V   complete dim=2
#pragma HLS ARRAY_PARTITION variable=OUT complete dim=2

  load_and_rearrange_qkv(input_data, Q, K, V);
  compute_flash_attention(Q, K, V, OUT);
  store_output(OUT, output_data);

  // Write OUT_ELEMS floats back to 32-bit stream
  for (int i = 0; i < OUT_ELEMS; i++) {
#pragma HLS PIPELINE II=1
    union {
      uint32_t u;
      float    f;
    } cvt;
    cvt.f = output_data[i];
    bit32_t word = (bit32_t)cvt.u;
    strm_out.write(word);
  }
}

} // extern "C"
