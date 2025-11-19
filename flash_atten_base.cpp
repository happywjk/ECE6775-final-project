//===============================================================
// FlashAttention (Online Softmax + Tiled) — Clean Version
// NO HLS pragmas — Pure logic for correctness & clarity
// Keeps original stream interface (bit32_t) used in your baseline
//===============================================================
#include <hls_stream.h>
#include <ap_int.h>
#include <stdint.h>
#include <math.h>

// Switch math backend depending on build target
#ifdef __SYNTHESIS__
  #include <hls_math.h>
  #define EXP(x) hls::expf(x)
  #define SQRT(x) hls::sqrtf(x)
#else
  #define EXP(x) expf(x)
  #define SQRT(x) sqrtf(x)
#endif

typedef ap_uint<32> bit32_t;

// === Model dimensions (same as baseline) ===
static const int BATCH_SIZE      = 4;
static const int CONTEXT_LENGTH  = 16;
static const int HIDDEN_SIZE     = 64;
static const int NUM_HEADS       = 4;
static const int HEAD_DIM        = HIDDEN_SIZE / NUM_HEADS;

static const int THREE_H   = 3 * HIDDEN_SIZE;
static const int IN_ELEMS  = BATCH_SIZE * CONTEXT_LENGTH * THREE_H;
static const int OUT_ELEMS = BATCH_SIZE * CONTEXT_LENGTH * NUM_HEADS * HEAD_DIM;

// Tile size for FlashAttention block processing
static const int BLOCK_T = 4;

extern "C" {

// ------------------------------------------------------------
// Load Q/K/V from flattened input buffer
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
          int h = c / HEAD_DIM;
          int d = c % HEAD_DIM;
          Q[b][h][t][d] = x;
        } else if (c < 2 * HIDDEN_SIZE) {
          int cl = c - HIDDEN_SIZE;
          int h = cl / HEAD_DIM;
          int d = cl % HEAD_DIM;
          K[b][h][t][d] = x;
        } else {
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
// FlashAttention — online softmax + tiling
// ------------------------------------------------------------
static void flash_attention(
  float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM])
{
  float scale = 1.0f / SQRT((float)HEAD_DIM);
  float scores_tile[BLOCK_T];

  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int h = 0; h < NUM_HEADS; ++h) {
      for (int tq = 0; tq < CONTEXT_LENGTH; ++tq) {

        float m_i = -1e30f;        // running max
        float l_i = 0.0f;          // running denominator
        float out_vec[HEAD_DIM] = {0};

        // iterate over key/value in tiles
        for (int tk0 = 0; tk0 < CONTEXT_LENGTH; tk0 += BLOCK_T) {

          int tile_len = (tk0 + BLOCK_T <= CONTEXT_LENGTH)
                       ? BLOCK_T
                       : (CONTEXT_LENGTH - tk0);

          float tile_max = -1e30f;

          // compute scores for this tile
          for (int tj = 0; tj < tile_len; ++tj) {
            int tk = tk0 + tj;
            float dot = 0.0f;
            for (int d = 0; d < HEAD_DIM; ++d)
              dot += Q[b][h][tq][d] * K[b][h][tk][d];
            float s = dot * scale;
            scores_tile[tj] = s;
            if (s > tile_max) tile_max = s;
          }

          // update global max
          float m_new = (tile_max > m_i) ? tile_max : m_i;

          // compute coefficient for previous state
          float alpha = (l_i == 0.0f) ? 0.0f : EXP(m_i - m_new);
          float l_new = alpha * l_i;

          float new_out_vec[HEAD_DIM];
          for (int d = 0; d < HEAD_DIM; ++d)
            new_out_vec[d] = out_vec[d] * alpha;

          // update softmax & accumulator using current tile
          for (int tj = 0; tj < tile_len; ++tj) {
            float e = EXP(scores_tile[tj] - m_new);
            l_new += e;
            int tk = tk0 + tj;
            for (int d = 0; d < HEAD_DIM; ++d)
              new_out_vec[d] += e * V[b][h][tk][d];
          }

          // commit
          m_i = m_new;
          l_i = l_new;
          for (int d = 0; d < HEAD_DIM; ++d)
            out_vec[d] = new_out_vec[d];
        }

        // normalization
        float inv_l = 1.0f / (l_i + 1e-9f);
        for (int d = 0; d < HEAD_DIM; ++d)
          OUT[b][h][tq][d] = out_vec[d] * inv_l;
      }
    }
  }
}

// ------------------------------------------------------------
// Copy OUT tensor back to flattened output buffer
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
// Top-level DUT — STREAM interface (unchanged from baseline)
// ------------------------------------------------------------
void dut(hls::stream<bit32_t> &strm_in,
         hls::stream<bit32_t> &strm_out)
{
  float input_data[IN_ELEMS];
  float output_data[OUT_ELEMS];

  for (int i = 0; i < IN_ELEMS; ++i) {
    bit32_t word = strm_in.read();
    union { uint32_t u; float f; } cvt;
    cvt.u = word;
    input_data[i] = cvt.f;
  }

  static float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];

  load_qkv(input_data, Q, K, V);
  flash_attention(Q, K, V, OUT);
  store_output(OUT, output_data);

  for (int i = 0; i < OUT_ELEMS; ++i) {
    union { uint32_t u; float f; } cvt;
    cvt.f = output_data[i];
    strm_out.write((bit32_t)cvt.u);
  }
}

} // extern "C"
