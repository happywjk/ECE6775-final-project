//===============================================================
// attention_baseline.h
// Header for Baseline Standard Attention (Array-based DUT Version)
//===============================================================
#ifndef ATTENTION_BASELINE_H
#define ATTENTION_BASELINE_H

// ------------------------------------------------------------
// Datatype (must match baseline.cpp and baseline_test.cpp)
// ------------------------------------------------------------
typedef float fp_t;

// ------------------------------------------------------------
// Global configuration
// ------------------------------------------------------------
static const int BATCH_SIZE      = 4;
static const int CONTEXT_LENGTH  = 16;
static const int HIDDEN_SIZE     = 64;
static const int NUM_HEADS       = 4;
static const int HEAD_DIM        = HIDDEN_SIZE / NUM_HEADS;

static const int THREE_H   = 3 * HIDDEN_SIZE;
static const int IN_ELEMS  = BATCH_SIZE * CONTEXT_LENGTH * THREE_H;              // 12288
static const int OUT_ELEMS = BATCH_SIZE * CONTEXT_LENGTH * NUM_HEADS * HEAD_DIM; // 4096

// ------------------------------------------------------------
// Top-level DUT function (array interface)
// ------------------------------------------------------------
extern "C"
void dut(fp_t input_data[IN_ELEMS],
         fp_t output_data[OUT_ELEMS]);

#endif // ATTENTION_BASELINE_H
