//===------------------------------------------------------------*- C++ -*-===//
//
// Plain Scaled Dot-Product Attention in Vitis HLS (QK^T -> softmax -> SV)
//
//===----------------------------------------------------------------------===//
#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_math.h>
#include <math.h>
#include <stdint.h>

const int BATCH_SIZE      = 4;
const int CONTEXT_LENGTH  = 16;
const int HIDDEN_SIZE     = 64;
const int NUM_HEADS       = 4;
const int HEAD_DIM        = HIDDEN_SIZE / NUM_HEADS;

const int THREE_H = 3 * HIDDEN_SIZE;
const int INPUT_SIZE  = BATCH_SIZE * CONTEXT_LENGTH * THREE_H;      // 12288
const int OUTPUT_SIZE = BATCH_SIZE * CONTEXT_LENGTH * NUM_HEADS * HEAD_DIM;  // 4096

// Fixed-point type: 32 total bits, 8 integer bits (24 fractional)
typedef ap_fixed<32,8, AP_TRN, AP_SAT> fp_t;

static inline fp_t exp_fixed(fp_t x) {
  // Clamp domain after max-subtraction
  if (x > (fp_t)0) x = (fp_t)0;
  if (x < (fp_t)(-8.0)) x = (fp_t)(-8.0);
  fp_t x2 = x * x;
  fp_t x3 = x2 * x;
  // 1 + x + x^2/2 + x^3/6 (order-3)
  return (fp_t)1.0 + x + (fp_t)0.5 * x2 + (fp_t)(1.0/6.0) * x3;
}

// Load and rearrange X[B,T,3H] into local buffers Q/K/V[B][NH][T][HD]
static void load_and_rearrange_qkv(
    const fp_t input_data[INPUT_SIZE],  
    fp_t Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    fp_t K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    fp_t V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM]) {
#pragma HLS INLINE off
#pragma HLS ARRAY_PARTITION variable=Q complete dim=2
#pragma HLS ARRAY_PARTITION variable=K complete dim=2
#pragma HLS ARRAY_PARTITION variable=V complete dim=2

  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int t = 0; t < CONTEXT_LENGTH; ++t) {
#pragma HLS PIPELINE II=1
      for (int c = 0; c < THREE_H; ++c) {
        int idx = b * (CONTEXT_LENGTH * THREE_H) + t * THREE_H + c;
        fp_t x = input_data[idx];

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
    fp_t Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    fp_t K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    fp_t V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    fp_t out[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM]) {
#pragma HLS INLINE off
#pragma HLS ARRAY_PARTITION variable=Q complete dim=2
#pragma HLS ARRAY_PARTITION variable=K complete dim=2
#pragma HLS ARRAY_PARTITION variable=V complete dim=2
#pragma HLS ARRAY_PARTITION variable=out complete dim=2

  // HEAD_DIM=16 => 1/sqrt(16)=0.25 to avoid floating IP
  const fp_t scale = (fp_t)0.25;
  fp_t attn_row[CONTEXT_LENGTH];
#pragma HLS ARRAY_PARTITION variable=attn_row complete dim=1

  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int h = 0; h < NUM_HEADS; ++h) {
      for (int tq = 0; tq < CONTEXT_LENGTH; ++tq) {
        fp_t max_score = (fp_t)(-1.0e6);
        for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
#pragma HLS PIPELINE II=1
          fp_t dot = (fp_t)0.0;
          for (int d = 0; d < HEAD_DIM; ++d) {
#pragma HLS UNROLL
            dot += Q[b][h][tq][d] * K[b][h][tk][d];
          }
          fp_t s = dot * scale;
          attn_row[tk] = s;
          if (s > max_score) max_score = s;
        }

        fp_t sum_exp = (fp_t)0.0;
        for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
#pragma HLS PIPELINE II=1
          fp_t e = exp_fixed(attn_row[tk] - max_score);
          attn_row[tk] = e;
          sum_exp += e;
        }
        fp_t inv_sum = (fp_t)1.0 / (sum_exp + (fp_t)1e-6);

        for (int d = 0; d < HEAD_DIM; ++d) {
#pragma HLS UNROLL
          fp_t acc = (fp_t)0.0;
          for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
#pragma HLS PIPELINE II=1
            fp_t w = attn_row[tk] * inv_sum;
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
    //const fp_t out[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    fp_t out[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    fp_t output_data[OUTPUT_SIZE]) {  
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

extern "C" void top(
  fp_t input_data[INPUT_SIZE],  
  fp_t output_data[OUTPUT_SIZE]  
) {
// void top(
//   float input_data[INPUT_SIZE],  
//   float output_data[OUTPUT_SIZE]  
// ) {
// #pragma HLS INTERFACE ap_ctrl_hs port=return

  static fp_t Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static fp_t K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static fp_t V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static fp_t OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];

#pragma HLS ARRAY_PARTITION variable=Q complete dim=2
#pragma HLS ARRAY_PARTITION variable=K complete dim=2
#pragma HLS ARRAY_PARTITION variable=V complete dim=2
#pragma HLS ARRAY_PARTITION variable=OUT complete dim=2

  load_and_rearrange_qkv(input_data, Q, K, V);
  compute_attention(Q, K, V, OUT);
  store_output(OUT, output_data);
}