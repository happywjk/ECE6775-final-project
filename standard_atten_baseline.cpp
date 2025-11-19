//===============================================================
// Baseline Standard Attention Computation
// Input:  input_data  [B, T, 3*H]  (flattened, Q | K | V)
// Output: output_data [B, T, NH, HD] (flattened)
// Implements: softmax(QK^T / sqrt(d)) V
//===============================================================
#include <hls_stream.h>
#include <ap_int.h>
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

extern "C" {

static inline float fast_exp(float x) {
  return expf(x);
}

// ------------------------------------------------------------
// load Q,K,V
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

// ------------------------------------------------------------
// compute attention
// ------------------------------------------------------------
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

// ------------------------------------------------------------
// Store output
// ------------------------------------------------------------
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
// Top-level DUT: stream interface like the BNN lab
// ------------------------------------------------------------
void dut(hls::stream<bit32_t> &strm_in,
         hls::stream<bit32_t> &strm_out)
{
  float input_data[IN_ELEMS];
  float output_data[OUT_ELEMS];

  // Read IN_ELEMS floats from 32-bit stream
  for (int i = 0; i < IN_ELEMS; i++) {
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

  load_and_rearrange_qkv(input_data, Q, K, V);
  compute_attention_baseline(Q, K, V, OUT);
  store_output(OUT, output_data);

  // Write OUT_ELEMS floats back to 32-bit stream
  for (int i = 0; i < OUT_ELEMS; i++) {
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
