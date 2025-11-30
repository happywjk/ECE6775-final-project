//===============================================================
// FlashAttention - Memory Simulation Version
// Integrates:
// 1. Memory Simulation (write_mem / read_mem)
// 2. Fixed Array Partitioning & Logic from your verified version
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

// ==========================================================
// 1. Memory Simulation Modules (New Additions)
// ==========================================================

// Simulated DMA Write: move stream data into on-chip memory (BRAM)
// Acts as a staging "global buffer"
static void write_mem(hls::stream<bit32_t> &strm_in, float local_ram[IN_ELEMS]) {
    for (int i = 0; i < IN_ELEMS; ++i) {
        #pragma HLS PIPELINE II=1
        bit32_t word = strm_in.read();
        union { uint32_t u; float f; } cvt;
        cvt.u = word;
        local_ram[i] = cvt.f;
    }
}

// Simulated DMA Read: move on-chip memory data back to the stream
static void read_mem(float local_ram[OUT_ELEMS], hls::stream<bit32_t> &strm_out) {
    for (int i = 0; i < OUT_ELEMS; ++i) {
        #pragma HLS PIPELINE II=1
        union { uint32_t u; float f; } cvt;
        cvt.f = local_ram[i];
        strm_out.write((bit32_t)cvt.u);
    }
}

// ==========================================================
// 2. Core Logic (Adapted from your FIXED version)
// ==========================================================

static void load_qkv(
  const float input_data[IN_ELEMS],
  float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM])
{
  int idx = 0;
  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int t = 0; t < CONTEXT_LENGTH; ++t) {
      for (int c = 0; c < THREE_H; ++c) {
        #pragma HLS PIPELINE II=1
        float x = input_data[idx++]; // Reading from Main Memory simulation

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

static void flash_attention_core(
  float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
  float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM])
{
  // Same Partitioning as your fixed version
  #pragma HLS ARRAY_PARTITION variable=Q complete dim=4
  #pragma HLS ARRAY_PARTITION variable=K complete dim=4
  #pragma HLS ARRAY_PARTITION variable=V complete dim=4
  #pragma HLS ARRAY_PARTITION variable=OUT complete dim=4
  #pragma HLS ARRAY_PARTITION variable=K cyclic factor=4 dim=3
  #pragma HLS ARRAY_PARTITION variable=V cyclic factor=4 dim=3

  float scale = 1.0f / SQRT((float)HEAD_DIM);

  for (int b = 0; b < BATCH_SIZE; ++b) {
    for (int h = 0; h < NUM_HEADS; ++h) {
      for (int tq = 0; tq < CONTEXT_LENGTH; ++tq) {
        
        float m_i = -1e30f;
        float l_i = 0.0f;
        float out_vec[HEAD_DIM];
        #pragma HLS ARRAY_PARTITION variable=out_vec complete dim=1

        for(int d=0; d<HEAD_DIM; ++d) {
            #pragma HLS UNROLL
            out_vec[d] = 0.0f;
        }

        loop_tiles: 
        for (int tk0 = 0; tk0 < CONTEXT_LENGTH; tk0 += BLOCK_T) {
          #pragma HLS PIPELINE II=12
          
          float scores_tile[BLOCK_T];
          #pragma HLS ARRAY_PARTITION variable=scores_tile complete

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

          float tile_max = -1e30f;
          for(int tj=0; tj<BLOCK_T; ++tj) {
              #pragma HLS UNROLL
              if(scores_tile[tj] > tile_max) tile_max = scores_tile[tj];
          }

          float m_prev = m_i;
          float m_new = (tile_max > m_prev) ? tile_max : m_prev;
          float alpha = (l_i == 0.0f) ? 0.0f : EXP(m_prev - m_new);

          float exp_vals[BLOCK_T];
          float tile_sum = 0.0f;
          for(int tj=0; tj<BLOCK_T; ++tj) {
              #pragma HLS UNROLL
              exp_vals[tj] = EXP(scores_tile[tj] - m_new);
              tile_sum += exp_vals[tj];
          }

          float l_new = alpha * l_i + tile_sum;

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

          m_i = m_new;
          l_i = l_new;
        }

        float inv_l = 1.0f / (l_i + 1e-9f);
        for (int d = 0; d < HEAD_DIM; ++d) {
          #pragma HLS UNROLL
          OUT[b][h][tq][d] = out_vec[d] * inv_l;
        }
      }
    }
  }
}

static void store_output_formatted(
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

// Wrapper: Reads from "Memory", Computes, Writes to "Memory"
static void compute_engine(float input_mem[IN_ELEMS], float output_mem[OUT_ELEMS]) {
    // Internal Tensors (Local Buffers)
    static float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
    static float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
    static float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
    static float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
    
    // Partitioning directives
    #pragma HLS ARRAY_PARTITION variable=Q complete dim=4
    #pragma HLS ARRAY_PARTITION variable=K complete dim=4
    #pragma HLS ARRAY_PARTITION variable=V complete dim=4
    #pragma HLS ARRAY_PARTITION variable=OUT complete dim=4
    #pragma HLS ARRAY_PARTITION variable=K cyclic factor=4 dim=3
    #pragma HLS ARRAY_PARTITION variable=V cyclic factor=4 dim=3

    // 1. Fetch from Memory
    load_qkv(input_mem, Q, K, V);
    // 2. Compute
    flash_attention_core(Q, K, V, OUT);
    // 3. Write back to Memory
    store_output_formatted(OUT, output_mem);
}

// ==========================================================
// TOP LEVEL DUT
// ==========================================================
void dut(hls::stream<bit32_t> &strm_in, hls::stream<bit32_t> &strm_out) {
  #pragma HLS INTERFACE axis port=strm_in
  #pragma HLS INTERFACE axis port=strm_out
  #pragma HLS INTERFACE ap_ctrl_none port=return

  // MEMORY SIMULATION:
  // Use static arrays so HLS maps these large buffers to on-chip RAM (BRAM/URAM)
  static float main_memory_in[IN_ELEMS];
  static float main_memory_out[OUT_ELEMS];
  
  // Step 1: Load (Stream -> Memory)
  write_mem(strm_in, main_memory_in);

  // Step 2: Compute (Memory -> Logic -> Memory)
  // Core compute: operates on the memory buffers, not on the streams directly
  compute_engine(main_memory_in, main_memory_out);

  // Step 3: Store (Memory -> Stream)
  read_mem(main_memory_out, strm_out);
}

} // extern "C"