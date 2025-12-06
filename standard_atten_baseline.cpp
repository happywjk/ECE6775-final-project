//===============================================================
// Standard Attention (Honest Memory-Bound Implementation)
// ==============================================================
// 模拟真实硬件瓶颈：
// 1. 中间结果 Attention Scores (S) 必须写回 Memory (模拟显存)
// 2. Softmax 阶段必须从 Memory 读取数据
// 3. 这种实现方式在 Context Length 增大时会迅速耗尽 BRAM
//===============================================================

#include <hls_stream.h>
#include <ap_int.h>
#include <stdint.h>
#include <math.h>

// 针对综合环境和仿真环境选择数学库
#ifdef __SYNTHESIS__
  #include <hls_math.h>
  #define EXP(x) hls::expf(x)
  #define SQRT(x) hls::sqrtf(x)
#else
  #define EXP(x) expf(x)
  #define SQRT(x) sqrtf(x)
#endif

typedef ap_uint<32> bit32_t;

// === 维度定义 ===
// 如果你想看这一版本崩溃，尝试将 CONTEXT_LENGTH 改为 64 或 128
static const int BATCH_SIZE      = 4;
static const int CONTEXT_LENGTH  = 16; 
static const int HIDDEN_SIZE     = 64;
static const int NUM_HEADS       = 4;
static const int HEAD_DIM        = HIDDEN_SIZE / NUM_HEADS; // 16

static const int THREE_H   = 3 * HIDDEN_SIZE;
static const int IN_ELEMS  = BATCH_SIZE * CONTEXT_LENGTH * THREE_H;
static const int OUT_ELEMS = BATCH_SIZE * CONTEXT_LENGTH * NUM_HEADS * HEAD_DIM;

// 【关键瓶颈】: Attention Scores 矩阵大小 = B * H * N * N
// 标准 Attention 必须存储这个矩阵
static const int SCORE_ELEMS = BATCH_SIZE * NUM_HEADS * CONTEXT_LENGTH * CONTEXT_LENGTH;

extern "C" {

// ------------------------------------------------------------
// 辅助函数：加载数据
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
          Q[b][c/HEAD_DIM][t][c%HEAD_DIM] = x;
        } else if (c < 2*HIDDEN_SIZE) {
          int cl = c - HIDDEN_SIZE;
          K[b][cl/HEAD_DIM][t][cl%HEAD_DIM] = x;
        } else {
          int cl = c - 2*HIDDEN_SIZE;
          V[b][cl/HEAD_DIM][t][cl%HEAD_DIM] = x;
        }
      }
    }
  }
}

// ------------------------------------------------------------
// 阶段 1: 计算 QK^T 并强制写入内存 (Write Bound)
// ------------------------------------------------------------
static void compute_scores_and_write_mem(
    float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float score_memory[SCORE_ELEMS] // 这是模拟 DDR/HBM 的接口
) {
    const float scale = 1.0f / SQRT((float)HEAD_DIM);

    for (int b = 0; b < BATCH_SIZE; ++b) {
        for (int h = 0; h < NUM_HEADS; ++h) {
            for (int tq = 0; tq < CONTEXT_LENGTH; ++tq) {
                for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
                    
                    // 计算点积
                    float dot = 0.0f;
                    for (int d = 0; d < HEAD_DIM; ++d) {
                        dot += Q[b][h][tq][d] * K[b][h][tk][d];
                    }
                    
                    // 【强制 IO】: 必须写入大数组
                    // 真实硬件中，这里会产生写带宽压力
                    int idx = b*(NUM_HEADS*CONTEXT_LENGTH*CONTEXT_LENGTH) + 
                              h*(CONTEXT_LENGTH*CONTEXT_LENGTH) + 
                              tq*CONTEXT_LENGTH + tk;
                    score_memory[idx] = dot * scale;
                }
            }
        }
    }
}

// ------------------------------------------------------------
// 阶段 2: 从内存读取 Scores -> Softmax -> Multiply V (Read Bound)
// ------------------------------------------------------------
static void read_mem_and_softmax(
    float score_memory[SCORE_ELEMS], // 从模拟 DDR 读取
    float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM],
    float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM]
) {
    // 行缓存 (SRAM)，模拟片上只能放下一行数据
    float row_buffer[CONTEXT_LENGTH]; 

    for (int b = 0; b < BATCH_SIZE; ++b) {
        for (int h = 0; h < NUM_HEADS; ++h) {
            for (int tq = 0; tq < CONTEXT_LENGTH; ++tq) {
                
                // --- 第一次扫描: 读内存 + 找 Max ---
                float rmax = -1e30f;
                int base_idx = b*(NUM_HEADS*CONTEXT_LENGTH*CONTEXT_LENGTH) + 
                               h*(CONTEXT_LENGTH*CONTEXT_LENGTH) + 
                               tq*CONTEXT_LENGTH;

                for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
                    // 【强制 IO】: 从大数组读取
                    float s = score_memory[base_idx + tk];
                    if (s > rmax) rmax = s;
                    row_buffer[tk] = s; // 暂存到片上 SRAM
                }

                // --- 第二次扫描: Exp + Sum (在片上进行) ---
                float sum_exp = 0.0f;
                for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
                    float e = EXP(row_buffer[tk] - rmax);
                    row_buffer[tk] = e; // 更新为概率值(未归一化)
                    sum_exp += e;
                }

                // --- 第三次扫描: Normalize + MatMul V ---
                float inv_sum = 1.0f / (sum_exp + 1e-9f);
                
                for (int d = 0; d < HEAD_DIM; ++d) {
                    float acc = 0.0f;
                    for (int tk = 0; tk < CONTEXT_LENGTH; ++tk) {
                        // row_buffer[tk] 此时已经是 exp 值
                        acc += (row_buffer[tk] * inv_sum) * V[b][h][tk][d];
                    }
                    OUT[b][h][tq][d] = acc;
                }
            }
        }
    }
}

// ------------------------------------------------------------
// 辅助函数：写回结果
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
// Top-Level DUT
// ------------------------------------------------------------
void dut(hls::stream<bit32_t> &strm_in,
         hls::stream<bit32_t> &strm_out)
{
  #pragma HLS INTERFACE axis port=strm_in
  #pragma HLS INTERFACE axis port=strm_out
  #pragma HLS INTERFACE ap_ctrl_none port=return

  // 1. 定义模拟 DDR 的大数组
  static float main_memory_in[IN_ELEMS];
  static float main_memory_out[OUT_ELEMS];
  
  // 【Standard Attention 的死穴】
  // 这个数组模拟必须存放在 DDR 中的 Attention Score Matrix
  // 它的大小随 Context Length 平方增长 (N^2)
  static float main_memory_scores[SCORE_ELEMS]; 

  // 2. 片上缓存 (Standard Attention 假设可以放下全部 K, V)
  static float Q[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float K[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float V[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];
  static float OUT[BATCH_SIZE][NUM_HEADS][CONTEXT_LENGTH][HEAD_DIM];

  // ==========================================
  // 执行流程
  // ==========================================

  // Step 1: 读入 Q, K, V 到片上
  for (int i = 0; i < IN_ELEMS; ++i) {
    bit32_t w = strm_in.read();
    union {uint32_t u; float f;} cvt; cvt.u=w;
    main_memory_in[i] = cvt.f;
  }
  load_qkv(main_memory_in, Q, K, V);

  // Step 2: 阶段一 (计算并写出)
  // 产生大量 Write 流量
  compute_scores_and_write_mem(Q, K, main_memory_scores);

  // Step 3: 阶段二 (读取并 Softmax)
  // 产生大量 Read 流量，且必须等待 Step 2 完成
  read_mem_and_softmax(main_memory_scores, V, OUT);

  // Step 4: 写回最终结果
  store_output(OUT, main_memory_out);
  for (int i = 0; i < OUT_ELEMS; ++i) {
    union {uint32_t u; float f;} cvt; cvt.f=main_memory_out[i];
    strm_out.write((bit32_t)cvt.u);
  }
}

} // extern "C"