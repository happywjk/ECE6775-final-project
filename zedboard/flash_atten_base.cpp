//===============================================================
// FlashAttention (Real Tiled Memory Access Version)
// Optimization: Drastically reduces BRAM usage by using small tiles
//===============================================================
#include <hls_stream.h>
#include <ap_int.h>
#include <stdint.h>
#include <math.h>

#ifdef __SYNTHESIS__
  #include <hls_math.h>
  #define EXP(x) hls::expf(x)
  #define SQRT(x) hls::sqrtf(x)
#else
  #define EXP(x) expf(x)
  #define SQRT(x) sqrtf(x)
#endif

typedef ap_uint<32> bit32_t;

// === Dimensions ===
static const int BATCH_SIZE      = 4;
static const int CONTEXT_LENGTH  = 16;
static const int HIDDEN_SIZE     = 64;
static const int NUM_HEADS       = 4;
static const int HEAD_DIM        = HIDDEN_SIZE / NUM_HEADS; // 16

static const int THREE_H   = 3 * HIDDEN_SIZE;
static const int IN_ELEMS  = BATCH_SIZE * CONTEXT_LENGTH * THREE_H;
static const int OUT_ELEMS = BATCH_SIZE * CONTEXT_LENGTH * NUM_HEADS * HEAD_DIM;

// Tile size (SRAM Size)
// 核心差异：我们只会在片上分配这么大的空间
static const int BLOCK_T = 4; 

extern "C" {

// ------------------------------------------------------------
// Helper: Load a small Tile from "DDR" (Global Memory) to SRAM
// ------------------------------------------------------------
// Type 0=Q, 1=K, 2=V
static void load_tile(
    const float global_mem[IN_ELEMS],
    float local_tile[BLOCK_T][HEAD_DIM],
    int b, int h, int t_start, int type_offset
) {
    for (int t = 0; t < BLOCK_T; ++t) {
        for (int d = 0; d < HEAD_DIM; ++d) {
            // Address calculation to find where Q, K, or V is in the flat array
            // Layout: B * (T * 3H) + t_global * 3H + (type*H + h*D + d)
            int t_global = t_start + t;
            if (t_global >= CONTEXT_LENGTH) {
                local_tile[t][d] = 0.0f; // Padding if needed
                continue;
            }
            
            int global_c = type_offset * HIDDEN_SIZE + h * HEAD_DIM + d;
            int idx = b * (CONTEXT_LENGTH * THREE_H) + t_global * THREE_H + global_c;
            
            local_tile[t][d] = global_mem[idx];
        }
    }
}

// ------------------------------------------------------------
// Helper: Store a small Tile from SRAM to "DDR"
// ------------------------------------------------------------
static void store_tile(
    float global_mem[OUT_ELEMS],
    float local_tile[BLOCK_T][HEAD_DIM],
    int b, int h, int t_start
) {
    for (int t = 0; t < BLOCK_T; ++t) {
        for (int d = 0; d < HEAD_DIM; ++d) {
            int t_global = t_start + t;
            if (t_global >= CONTEXT_LENGTH) continue;

            int idx = (((b * CONTEXT_LENGTH + t_global) * NUM_HEADS + h) * HEAD_DIM + d);
            global_mem[idx] = local_tile[t][d];
        }
    }
}

// ------------------------------------------------------------
// Core Math Kernel: Only works on small SRAM buffers
// ------------------------------------------------------------
static void compute_block_attention(
    float Q_tile[BLOCK_T][HEAD_DIM],
    float K_tile[BLOCK_T][HEAD_DIM],
    float V_tile[BLOCK_T][HEAD_DIM],
    float O_tile[BLOCK_T][HEAD_DIM],
    float m_vec[BLOCK_T],
    float l_vec[BLOCK_T],
    float scale,
    bool is_first_block
) {
    // Local computation buffers
    float S_tile[BLOCK_T][BLOCK_T]; // Q_tile * K_tile^T

    // 1. Matmul: S = Q * K^T
    for (int i = 0; i < BLOCK_T; ++i) {
        for (int j = 0; j < BLOCK_T; ++j) {
            float dot = 0.0f;
            for (int d = 0; d < HEAD_DIM; ++d) {
                dot += Q_tile[i][d] * K_tile[j][d];
            }
            S_tile[i][j] = dot * scale;
        }
    }

    // 2. Online Softmax Update
    for (int i = 0; i < BLOCK_T; ++i) {
        // Find max in this new K-block row
        float row_max_val = -1e30f;
        for (int j = 0; j < BLOCK_T; ++j) {
            if (S_tile[i][j] > row_max_val) row_max_val = S_tile[i][j];
        }

        float m_prev = m_vec[i];
        float m_new = (row_max_val > m_prev) ? row_max_val : m_prev;
        
        // Exponentials for update
        // If first block, l_prev is essentially 0 (handled by init logic)
        float alpha = (is_first_block) ? 0.0f : EXP(m_prev - m_new);
        float beta  = EXP(row_max_val - m_new); // Scaling for new scores

        // Update l (running sum)
        float row_sum_exp = 0.0f;
        for (int j = 0; j < BLOCK_T; ++j) {
            // Note: We exponentiate S_tile in place to save ops later if desired
            // Or just recompute exp. Let's compute P value.
            row_sum_exp += EXP(S_tile[i][j] - row_max_val); // This is local sum
        }
        
        float l_new = (l_vec[i] * alpha) + (row_sum_exp * beta);

        // Update O (Accumulator)
        // O_new = O_old * alpha + P_new * V_new * beta
        for (int d = 0; d < HEAD_DIM; ++d) {
            float pv_sum = 0.0f;
            for (int j = 0; j < BLOCK_T; ++j) {
                float p_val = EXP(S_tile[i][j] - row_max_val); // Softmax score (unscaled)
                pv_sum += p_val * V_tile[j][d];
            }
            O_tile[i][d] = O_tile[i][d] * alpha + pv_sum * beta;
        }

        // Write back stats
        m_vec[i] = m_new;
        l_vec[i] = l_new;
    }
}

// ------------------------------------------------------------
// Compute Engine: Orchestrates Tiled Data Movement
// ------------------------------------------------------------
static void compute_engine(const float input_mem[IN_ELEMS], float output_mem[OUT_ELEMS]) {
    
    float scale = 1.0f / SQRT((float)HEAD_DIM);

    // === 核心差异点 ===
    // 我们不再声明大的 Q, K, V 数组
    // 而是声明极小的 SRAM Buffer (Tiles)
    // HLS 会把这些映射为少量的寄存器或小 BRAM
    float Q_sram[BLOCK_T][HEAD_DIM];
    float K_sram[BLOCK_T][HEAD_DIM];
    float V_sram[BLOCK_T][HEAD_DIM];
    float O_sram[BLOCK_T][HEAD_DIM];
    
    // Stats buffers (One value per row in Q tile)
    float m_sram[BLOCK_T];
    float l_sram[BLOCK_T];

    // Loops over Batches and Heads
    for (int b = 0; b < BATCH_SIZE; ++b) {
        for (int h = 0; h < NUM_HEADS; ++h) {
            
            // Outer Loop: Iterate over Q Tiles (Row blocks)
            for (int tr = 0; tr < CONTEXT_LENGTH; tr += BLOCK_T) {
                
                // 1. Load Q Tile from "Memory" to "SRAM"
                load_tile(input_mem, Q_sram, b, h, tr, 0); // 0 = Q offset

                // Initialize Accumulators for this Q tile
                for(int i=0; i<BLOCK_T; ++i) {
                    m_sram[i] = -1e30f;
                    l_sram[i] = 0.0f;
                    for(int d=0; d<HEAD_DIM; ++d) O_sram[i][d] = 0.0f;
                }

                // Inner Loop: Iterate over K, V Tiles (Column blocks)
                for (int tc = 0; tc < CONTEXT_LENGTH; tc += BLOCK_T) {
                    
                    // 2. Load K and V Tiles from "Memory" to "SRAM"
                    load_tile(input_mem, K_sram, b, h, tc, 1); // 1 = K offset
                    load_tile(input_mem, V_sram, b, h, tc, 2); // 2 = V offset

                    // 3. Compute Attention on this block
                    compute_block_attention(
                        Q_sram, K_sram, V_sram, O_sram, 
                        m_sram, l_sram, scale, (tc == 0)
                    );
                }

                // 4. Final Normalization (O = O / l)
                for(int i=0; i<BLOCK_T; ++i) {
                    float inv_l = 1.0f / (l_sram[i] + 1e-9f);
                    for(int d=0; d<HEAD_DIM; ++d) {
                        O_sram[i][d] *= inv_l;
                    }
                }

                // 5. Write Result Tile back to "Memory"
                store_tile(output_mem, O_sram, b, h, tr);
            }
        }
    }
}

// ------------------------------------------------------------
// Interface Wrappers
// ------------------------------------------------------------
static void write_mem(hls::stream<bit32_t> &strm_in, float local_ram[IN_ELEMS]) {
  for (int i = 0; i < IN_ELEMS; ++i) {
    #pragma HLS PIPELINE II=1
    bit32_t word = strm_in.read();
    union { uint32_t u; float f; } cvt;
    cvt.u = (uint32_t)word;
    local_ram[i] = cvt.f;
  }
}

static void read_mem(const float local_ram[OUT_ELEMS], hls::stream<bit32_t> &strm_out) {
  for (int i = 0; i < OUT_ELEMS; ++i) {
    #pragma HLS PIPELINE II=1
    union { uint32_t u; float f; } cvt;
    cvt.f = local_ram[i];
    strm_out.write((bit32_t)cvt.u);
  }
}

void dut(hls::stream<bit32_t> &strm_in,
         hls::stream<bit32_t> &strm_out)
{
  #pragma HLS INTERFACE axis port=strm_in
  #pragma HLS INTERFACE axis port=strm_out
  #pragma HLS INTERFACE ap_ctrl_none port=return

  // "Off-Chip" Memory Simulation
  // HLS will likely map these to huge BRAMs, representing DDR
  static float main_memory_in[IN_ELEMS];
  static float main_memory_out[OUT_ELEMS];

  // 1. DMA Write
  write_mem(strm_in, main_memory_in);
  
  // 2. Compute (This is where the magic happens)
  // Inside this function, ONLY small buffers are used
  compute_engine(main_memory_in, main_memory_out);
  
  // 3. DMA Read
  read_mem(main_memory_out, strm_out);
}

} // extern "C"