//===------------------------------------------------------------*- C++ -*-===//
//
// Plain Scaled Dot-Product Attention in Vitis HLS (QK^T -> softmax -> SV)
// Input:  input_data  [B, T, 3*H] (flattened), containing Q, K, V segments
// Output: output_data [B, T, NH, HD] (flattened), where HD = H / NH
//
// Numerical stability: subtract max before softmax, scale by 1/sqrt(HD).
// This implementation targets small scales (e.g., B=4,T=16,H=64,NH=4,HD=16)
// for local buffering and simulation validation. For larger cases, add
// blocking/streaming optimizations as needed.
//===----------------------------------------------------------------------===//
#include <ap_int.h>
#include <hls_math.h>
#include <math.h>
#include <stdint.h>

const int BATCH_SIZE      = 4;
const int CONTEXT_LENGTH  = 16;
const int HIDDEN_SIZE     = 64;
const int NUM_HEADS       = 4;
const int HEAD_DIM        = HIDDEN_SIZE / NUM_HEADS;

const int THREE_H = 3 * HIDDEN_SIZE;

extern "C" {

static inline float fast_exp(float x) {
  return hls::expf(x);
}

// Load and rearrange X[B,T,3H] into local buffers Q/K/V[B][NH][T][HD]
static void load_and_rearrange_qkv(
    const float *input_data,
    float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM]) {
#pragma HLS INLINE off
#pragma HLS ARRAY_PARTITION variable=Q complete dim=2
#pragma HLS ARRAY_PARTITION variable=K complete dim=2
#pragma HLS ARRAY_PARTITION variable=V complete dim=2

  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int t = 0; t < CONTEXT_LENGTH; ++t) {
#pragma HLS PIPELINE II=1
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

// Compute attention: scores = (Q @ K^T) / sqrt(HD); softmax; out = softmax(scores) @ V
static void compute_attention(
    float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float out[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM]) {
#pragma HLS INLINE off
#pragma HLS ARRAY_PARTITION variable=Q complete dim=2
#pragma HLS ARRAY_PARTITION variable=K complete dim=2
#pragma HLS ARRAY_PARTITION variable=V complete dim=2
#pragma HLS ARRAY_PARTITION variable=out complete dim=2

  const float scale = 1.0f / hls::sqrtf((float)HEAD_DIM);
  float attn_row[CONTEXT_LENGTH];
#pragma HLS ARRAY_PARTITION variable=attn_row complete dim=1

  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int h = 0; h < NUM_HEADS; ++h) {
      for (int tq = 0; tq < CONTEXT_LENGTH; ++tq) {
        float max_score = -1e30f;
        for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
#pragma HLS PIPELINE II=1
          float dot = 0.0f;
          for (int d = 0; d < HEAD_DIM; ++d) {
#pragma HLS UNROLL
            dot += Q[b][h][tq][d] * K[b][h][tk][d];
          }
          float s = dot * scale;
          attn_row[tk] = s;
          if (s > max_score) max_score = s;
        }

        float sum_exp = 0.0f;
        for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
#pragma HLS PIPELINE II=1
          float e = fast_exp(attn_row[tk] - max_score);
          attn_row[tk] = e;
          sum_exp += e;
        }
        float inv_sum = 1.0f / (sum_exp + 1e-9f);

        for (int d = 0; d < HEAD_DIM; ++d) {
#pragma HLS UNROLL
          float acc = 0.0f;
          for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
#pragma HLS PIPELINE II=1
            float w = attn_row[tk] * inv_sum;
            acc += w * V[b][h][tk][d];
          }
          out[b][h][tq][d] = acc;
        }
      }
    }
  }
}

// Store out[B,NH,T,HD] back to flattened output_data[B,T,NH,HD]
static void store_output(
    const float out[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float *output_data) {
#pragma HLS INLINE off
  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int t = 0; t < CONTEXT_LENGTH; ++t) {
      for (int h = 0; h < NUM_HEADS; ++h) {
#pragma HLS PIPELINE II=1
        for (int d = 0; d < HEAD_DIM; ++d) {
          int idx = (((b * CONTEXT_LENGTH + t) * NUM_HEADS + h) * HEAD_DIM + d);
          output_data[idx] = out[b][h][t][d];
        }
      }
    }
  }
}

void top(
  float *input_data,
  float *output_data
) {
#pragma HLS interface m_axi port=input_data  offset=slave bundle=gmem0
#pragma HLS interface m_axi port=output_data offset=slave bundle=gmem1
#pragma HLS interface s_axilite port=input_data   bundle=control
#pragma HLS interface s_axilite port=output_data  bundle=control
#pragma HLS interface s_axilite port=return       bundle=control

  static float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];

#pragma HLS ARRAY_PARTITION variable=Q complete dim=2
#pragma HLS ARRAY_PARTITION variable=K complete dim=2
#pragma HLS ARRAY_PARTITION variable=V complete dim=2
#pragma HLS ARRAY_PARTITION variable=OUT complete dim=2

  load_and_rearrange_qkv(input_data, Q, K, V);
  compute_attention(Q, K, V, OUT);
  store_output(OUT, output_data);
}

} // extern "C"
