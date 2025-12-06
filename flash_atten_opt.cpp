//===============================================================
// FlashAttention (HLS Optimized - Timing Fixed)
// Target: ZYNQ 7020 @ 10ns (100MHz)
// Strategy: UNROLL=2 to fix timing violation (14.9ns -> ~10ns)
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
// 建议保持 CONTEXT_LENGTH 较大 (如 64/128) 以体现 FlashAttention 的 BRAM 优势
static const int BATCH_SIZE      = 4;
static const int CONTEXT_LENGTH  = 16; 
static const int HIDDEN_SIZE     = 64;
static const int NUM_HEADS       = 4;
static const int HEAD_DIM        = HIDDEN_SIZE / NUM_HEADS; // 16

static const int THREE_H   = 3 * HIDDEN_SIZE;
static const int IN_ELEMS  = BATCH_SIZE * CONTEXT_LENGTH * THREE_H;
static const int OUT_ELEMS = BATCH_SIZE * CONTEXT_LENGTH * NUM_HEADS * HEAD_DIM;

// Tile size
static const int BLOCK_T = 4; 

// === 核心修改：降级 Unroll ===
// 之前的 4 会导致 14.9ns 的时序违例。
// 改为 2 是 Z7020 板子上 "速度" 和 "时序" 的最佳平衡点。
static const int UNROLL_FACTOR = 2; 

extern "C" {

// ------------------------------------------------------------
// Helper: Load Tile
// ------------------------------------------------------------
static void load_tile(
    const float global_mem[IN_ELEMS],
    float local_tile[BLOCK_T][HEAD_DIM],
    int b, int h, int t_start, int type_offset
) {
    // Cyclic partitioning 适配 UNROLL_FACTOR=2
    #pragma HLS ARRAY_PARTITION variable=local_tile cyclic factor=UNROLL_FACTOR dim=2

    load_loop_t:
    for (int t = 0; t < BLOCK_T; ++t) {
        load_loop_d:
        for (int d = 0; d < HEAD_DIM; ++d) {
            #pragma HLS PIPELINE II=1
            
            int t_global = t_start + t;
            float val = 0.0f;

            if (t_global < CONTEXT_LENGTH) {
                 int global_c = type_offset * HIDDEN_SIZE + h * HEAD_DIM + d;
                 int idx = b * (CONTEXT_LENGTH * THREE_H) + t_global * THREE_H + global_c;
                 val = global_mem[idx];
            }
            local_tile[t][d] = val;
        }
    }
}

// ------------------------------------------------------------
// Helper: Store Tile
// ------------------------------------------------------------
static void store_tile(
    float global_mem[OUT_ELEMS],
    float local_tile[BLOCK_T][HEAD_DIM],
    int b, int h, int t_start
) {
    #pragma HLS ARRAY_PARTITION variable=local_tile cyclic factor=UNROLL_FACTOR dim=2

    store_loop_t:
    for (int t = 0; t < BLOCK_T; ++t) {
        store_loop_d:
        for (int d = 0; d < HEAD_DIM; ++d) {
            #pragma HLS PIPELINE II=1
            
            int t_global = t_start + t;
            if (t_global < CONTEXT_LENGTH) {
                int idx = (((b * CONTEXT_LENGTH + t_global) * NUM_HEADS + h) * HEAD_DIM + d);
                global_mem[idx] = local_tile[t][d];
            }
        }
    }
}

// ------------------------------------------------------------
// Core Math Kernel (Timing Optimized)
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
    #pragma HLS INLINE off 
    // 开启表达式平衡，帮助 HLS 优化加法树时序
    #pragma HLS EXPRESSION_BALANCE

    // 使用 Factor=2 进行内存端口拆分，减少布线拥塞
    #pragma HLS ARRAY_PARTITION variable=Q_tile cyclic factor=UNROLL_FACTOR dim=2
    #pragma HLS ARRAY_PARTITION variable=K_tile cyclic factor=UNROLL_FACTOR dim=2
    #pragma HLS ARRAY_PARTITION variable=V_tile cyclic factor=UNROLL_FACTOR dim=2
    #pragma HLS ARRAY_PARTITION variable=O_tile cyclic factor=UNROLL_FACTOR dim=2
    
    // 小数组全拆分
    #pragma HLS ARRAY_PARTITION variable=m_vec  complete dim=0
    #pragma HLS ARRAY_PARTITION variable=l_vec  complete dim=0
    
    float S_tile[BLOCK_T][BLOCK_T];
    #pragma HLS ARRAY_PARTITION variable=S_tile complete dim=0

    // 1. Matmul: S = Q * K^T
    matmul_loop_i:
    for (int i = 0; i < BLOCK_T; ++i) {
        matmul_loop_j:
        for (int j = 0; j < BLOCK_T; ++j) {
            #pragma HLS PIPELINE II=1
            
            float dot = 0.0f;
            // Unroll=2: 每次并行算 2 个乘加，减轻时序压力
            dot_prod_loop:
            for (int d = 0; d < HEAD_DIM; ++d) {
                #pragma HLS UNROLL factor=UNROLL_FACTOR 
                dot += Q_tile[i][d] * K_tile[j][d];
            }
            S_tile[i][j] = dot * scale;
        }
    }

    // 2. Online Softmax Update
    softmax_update_loop:
    for (int i = 0; i < BLOCK_T; ++i) {
        #pragma HLS PIPELINE II=1 
        
        // Find max
        float row_max_val = -1e30f;
        for (int j = 0; j < BLOCK_T; ++j) {
            if (S_tile[i][j] > row_max_val) row_max_val = S_tile[i][j];
        }

        float m_prev = m_vec[i];
        float m_new = (row_max_val > m_prev) ? row_max_val : m_prev;
        
        float alpha = (is_first_block) ? 0.0f : EXP(m_prev - m_new);
        float beta  = EXP(row_max_val - m_new);

        // Update l
        float row_sum_exp = 0.0f;
        for (int j = 0; j < BLOCK_T; ++j) {
            row_sum_exp += EXP(S_tile[i][j] - row_max_val);
        }
        
        float l_new = (l_vec[i] * alpha) + (row_sum_exp * beta);

        // Update O
        update_o_loop:
        for (int d = 0; d < HEAD_DIM; ++d) {
            #pragma HLS UNROLL factor=UNROLL_FACTOR
            
            float pv_sum = 0.0f;
            for (int j = 0; j < BLOCK_T; ++j) {
                float p_val = EXP(S_tile[i][j] - row_max_val);
                pv_sum += p_val * V_tile[j][d];
            }
            O_tile[i][d] = O_tile[i][d] * alpha + pv_sum * beta;
        }

        m_vec[i] = m_new;
        l_vec[i] = l_new;
    }
}

// ------------------------------------------------------------
// Compute Engine
// ------------------------------------------------------------
static void compute_engine(const float input_mem[IN_ELEMS], float output_mem[OUT_ELEMS]) {
    
    float scale = 1.0f / SQRT((float)HEAD_DIM);

    // 小 SRAM Tiles
    float Q_sram[BLOCK_T][HEAD_DIM];
    float K_sram[BLOCK_T][HEAD_DIM];
    float V_sram[BLOCK_T][HEAD_DIM];
    float O_sram[BLOCK_T][HEAD_DIM];
    
    float m_sram[BLOCK_T];
    float l_sram[BLOCK_T];

    // Loops over Batches and Heads
    for (int b = 0; b < BATCH_SIZE; ++b) {
        for (int h = 0; h < NUM_HEADS; ++h) {
            
            for (int tr = 0; tr < CONTEXT_LENGTH; tr += BLOCK_T) {
                
                load_tile(input_mem, Q_sram, b, h, tr, 0);

                init_stats_loop:
                for(int i=0; i<BLOCK_T; ++i) {
                    #pragma HLS PIPELINE II=1
                    m_sram[i] = -1e30f;
                    l_sram[i] = 0.0f;
                    for(int d=0; d<HEAD_DIM; ++d) O_sram[i][d] = 0.0f;
                }

                for (int tc = 0; tc < CONTEXT_LENGTH; tc += BLOCK_T) {
                    
                    load_tile(input_mem, K_sram, b, h, tc, 1);
                    load_tile(input_mem, V_sram, b, h, tc, 2);

                    compute_block_attention(
                        Q_sram, K_sram, V_sram, O_sram, 
                        m_sram, l_sram, scale, (tc == 0)
                    );
                }

                norm_loop:
                for(int i=0; i<BLOCK_T; ++i) {
                    #pragma HLS PIPELINE II=1
                    float inv_l = 1.0f / (l_sram[i] + 1e-9f);
                    for(int d=0; d<HEAD_DIM; ++d) {
                        O_sram[i][d] *= inv_l;
                    }
                }

                store_tile(output_mem, O_sram, b, h, tr);
            }
        }
    }
}

// ------------------------------------------------------------
// Wrappers
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

  static float main_memory_in[IN_ELEMS];
  static float main_memory_out[OUT_ELEMS];

  // 1. DMA Write
  write_mem(strm_in, main_memory_in);
  
  // 2. Compute (Optimized)
  compute_engine(main_memory_in, main_memory_out);
  
  // 3. DMA Read
  read_mem(main_memory_out, strm_out);
}

} // extern "C"