//===============================================================
//===============================================================
// Baseline Standard Attention Computation
// Input:  input_data  [B, T, 3*H]  (flattened, Q | K | V)
// Output: output_data [B, T, NH, HD] (flattened)
// Implements: softmax(QK^T / sqrt(d)) V
//===============================================================
//===============================================================
#include <hls_math.h>
#include <math.h>
#include <stdint.h>

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
  return hls::expf(x);
}

//------------------------------------------------------------
// Load and split input into Q, K, V
//------------------------------------------------------------
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

//------------------------------------------------------------
// Compute full baseline attention
//------------------------------------------------------------
static void compute_attention_baseline(
    float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM]) {

  // Scaling factor 1/sqrt(d) for stability
  const float inv_sqrt_d = 1.0f / hls::sqrtf((float)HEAD_DIM);
  static float S[CONTEXT_LENGTH][CONTEXT_LENGTH]; // attention scores (T x T)
  static float prow[CONTEXT_LENGTH];              // one softmax row buffer

  for (int b = 0; b < BATCH_SIZE; ++b) {          // batch loop
    for (int h = 0; h < NUM_HEADS; ++h) {         // head loop
      // Step 1: compute scores S = QK^T / sqrt(d)
      for (int tq = 0; tq < CONTEXT_LENGTH; ++tq) {
        for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
          float dot = 0.0f;
          // Dot product
          for (int d = 0; d < HEAD_DIM; ++d)
            dot += Q[b][h][tq][d] * K[b][h][tk][d];
          S[tq][tk] = dot * inv_sqrt_d;           // apply scaling
        }
      }
      // Step 2: Doing softmax row by row
      for (int tq = 0; tq < CONTEXT_LENGTH; ++tq) {
        float rmax = -1e30f;
        // Find row max to prevent exp overflow
        for (int tk = 0; tk < CONTEXT_LENGTH; ++tk)
          if (S[tq][tk] > rmax) rmax = S[tq][tk];

        float sum_exp = 0.0f;
        // Exponentiate shifted scores and accumulate sum
        for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
          float e = fast_exp(S[tq][tk] - rmax);
          prow[tk] = e;
          sum_exp += e;
        }
        float inv_sum = 1.0f / (sum_exp + 1e-9f);

        // Step 3: weighted sum over V
        for (int d = 0; d < HEAD_DIM; ++d) {
          float acc = 0.0f;
          for (int tk = 0; tk < CONTEXT_LENGTH; ++tk)
            acc += (prow[tk] * inv_sum) * V[b][h][tk][d];
          OUT[b][h][tq][d] = acc;
        }
      }
    }
  }
}

//------------------------------------------------------------
// Store output back to flattened array
//------------------------------------------------------------
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

//------------------------------------------------------------
// dut: Top-level baseline
//------------------------------------------------------------
void dut(
  const float input_data[IN_ELEMS],
  float       output_data[OUT_ELEMS]
) {
  static float Q  [BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float K  [BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float V  [BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];

  load_and_rearrange_qkv(input_data, Q, K, V);
  compute_attention_baseline(Q, K, V, OUT);
  store_output(OUT, output_data);
}

} // extern "C"
