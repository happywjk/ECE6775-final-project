//===============================================================
// FlashAttention (Online Softmax + Tiled) — Integer-only Version
// NO floats anywhere: stream, storage, and math use integers
//===============================================================
#include <hls_stream.h>
#include <stdint.h>

typedef int8_t data_t;
typedef int32_t acc_t; // wider accumulator for dot products

static inline data_t clamp_int8(acc_t v) {
  if (v > 127)  return 127;
  if (v < -128) return -128;
  return static_cast<data_t>(v);
}

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
  const data_t input_data[IN_ELEMS],
  data_t Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  data_t K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  data_t V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM])
{
  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int t = 0; t < CONTEXT_LENGTH; ++t) {
      for (int c = 0; c < THREE_H; ++c) {

        int idx = b * (CONTEXT_LENGTH * THREE_H) + t * THREE_H + c;
        data_t x = input_data[idx];

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
  data_t Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  data_t K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  data_t V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  data_t OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM])
{
  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int h = 0; h < NUM_HEADS; ++h) {
      for (int tq = 0; tq < CONTEXT_LENGTH; ++tq) {

        acc_t out_vec[HEAD_DIM] = {0};
        acc_t norm = 1; // keep normalization non-zero

        // iterate over key/value in tiles
        for (int tk0 = 0; tk0 < CONTEXT_LENGTH; tk0 += BLOCK_T) {

          int tile_len = (tk0 + BLOCK_T <= CONTEXT_LENGTH)
                       ? BLOCK_T
                       : (CONTEXT_LENGTH - tk0);

          // compute integer scores for this tile
          acc_t scores_tile[BLOCK_T];
          for (int tj = 0; tj < tile_len; ++tj) {
            int tk = tk0 + tj;
            acc_t dot = 0;
            for (int d = 0; d < HEAD_DIM; ++d)
              dot += Q[b][h][tq][d] * K[b][h][tk][d];
            // Approximate scale by dividing by 4 (sqrt(HEAD_DIM)=4 for current dims)
            scores_tile[tj] = dot >> 2;
          }

          // accumulate using integer "softmax" surrogate
          for (int tj = 0; tj < tile_len; ++tj) {
            acc_t score = scores_tile[tj];
            acc_t weight = score >= 0 ? score : -score; // magnitude for normalization
            norm += weight;
            int tk = tk0 + tj;
            for (int d = 0; d < HEAD_DIM; ++d)
              out_vec[d] += score * (acc_t)V[b][h][tk][d];
          }
        }

        for (int d = 0; d < HEAD_DIM; ++d)
          OUT[b][h][tq][d] = clamp_int8(out_vec[d] / norm);
      }
    }
  }
}

// ------------------------------------------------------------
// Copy OUT tensor back to flattened output buffer
// ------------------------------------------------------------
static void store_output(
  const data_t OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  data_t output_data[OUT_ELEMS])
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
// Memory simulation helpers (Stream <-> BRAM-like buffers)
// ------------------------------------------------------------
static void write_mem(hls::stream<data_t> &strm_in, data_t local_ram[IN_ELEMS]) {
  for (int i = 0; i < IN_ELEMS; ++i) {
    data_t word = strm_in.read();
    local_ram[i] = word;
  }
}

static void read_mem(const data_t local_ram[OUT_ELEMS], hls::stream<data_t> &strm_out) {
  for (int i = 0; i < OUT_ELEMS; ++i) {
    strm_out.write(local_ram[i]);
  }
}

static void compute_engine(const data_t input_mem[IN_ELEMS], data_t output_mem[OUT_ELEMS]) {
  static data_t Q  [BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static data_t K  [BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static data_t V  [BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static data_t OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];

  load_qkv(input_mem, Q, K, V);
  flash_attention(Q, K, V, OUT);
  store_output(OUT, output_mem);
}

// ------------------------------------------------------------
// Top-level DUT — STREAM interface (unchanged from baseline)
// ------------------------------------------------------------
void dut(hls::stream<data_t> &strm_in,
         hls::stream<data_t> &strm_out)
{
  static data_t main_memory_in[IN_ELEMS];
  static data_t main_memory_out[OUT_ELEMS];

  // 1) Stream -> Memory
  write_mem(strm_in, main_memory_in);
  // 2) Compute (Memory -> Logic -> Memory)
  compute_engine(main_memory_in, main_memory_out);
  // 3) Memory -> Stream
  read_mem(main_memory_out, strm_out);
}

} // extern "C"
