//=========================================================================
// testbench.cpp  (AXIS version for standard_atten.cpp)
//=========================================================================
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "hls_stream.h"
#include <cstdint>

const int BATCH_SIZE      = 4;
const int CONTEXT_LENGTH  = 16;
const int HIDDEN_SIZE     = 64;
const int NUM_HEADS       = 4;
const int HEAD_DIM        = HIDDEN_SIZE / NUM_HEADS;
const int THREE_H         = 3 * HIDDEN_SIZE;
typedef int8_t data_t;

const int INPUT_SIZE  = BATCH_SIZE * CONTEXT_LENGTH * THREE_H;                 // 12288
const int OUTPUT_SIZE = BATCH_SIZE * CONTEXT_LENGTH * NUM_HEADS * HEAD_DIM;    // 4096

// DUT now uses AXI-stream style interface
extern "C" void dut(hls::stream<data_t> &strm_in,
                    hls::stream<data_t> &strm_out);

int main() {
  std::cout << "========================================" << std::endl;
  std::cout << "Standard Attention Testbench (AXIS)" << std::endl;
  std::cout << "========================================" << std::endl;
  std::cout << "Configuration:" << std::endl;
  std::cout << "  BATCH_SIZE      = " << BATCH_SIZE << std::endl;
  std::cout << "  CONTEXT_LENGTH  = " << CONTEXT_LENGTH << std::endl;
  std::cout << "  HIDDEN_SIZE     = " << HIDDEN_SIZE << std::endl;
  std::cout << "  NUM_HEADS       = " << NUM_HEADS << std::endl;
  std::cout << "  HEAD_DIM        = " << HEAD_DIM << std::endl;
  std::cout << "========================================" << std::endl;

  static data_t input_data [INPUT_SIZE];
  static data_t output_data[OUTPUT_SIZE];
  static data_t golden_data[OUTPUT_SIZE];

  // Initialize output to zero
  for (int i = 0; i < OUTPUT_SIZE; i++) {
    output_data[i] = 0;
  }

  //=========================================================================
  // Step 1: Read input data from file
  //=========================================================================
  std::cout << "\n[Step 1] Reading input data from 'input.data'..." << std::endl;
  std::ifstream infile("input.data");
  
  if (!infile.is_open()) {
    std::cerr << "Error: Unable to open 'input.data'!" << std::endl;
    return 1;
  }

  int input_count = 0;
  std::string line;
  while (std::getline(infile, line) && input_count < INPUT_SIZE) {
    input_data[input_count] = static_cast<data_t>(std::stoi(line));
    input_count++;
  }
  infile.close();

  if (input_count != INPUT_SIZE) {
    std::cerr << "Error: Expected " << INPUT_SIZE << " input values, but read " 
              << input_count << std::endl;
    return 1;
  }
  
  std::cout << "  Successfully read " << input_count << " input values." << std::endl;
  std::cout << "  First 5 values: ";
  for (int i = 0; i < 5; i++) {
    std::cout << static_cast<int>(input_data[i]) << " ";
  }
  std::cout << std::endl;

  //=========================================================================
  // Step 2: Call DUT (Design Under Test) via AXI streams
  //=========================================================================
  std::cout << "\n[Step 2] Running Standard Attention HLS design..." << std::endl;
  
  // Create AXI streams
  hls::stream<data_t> strm_in;
  hls::stream<data_t> strm_out;

  // Push all inputs into strm_in
  for (int i = 0; i < INPUT_SIZE; i++) {
    strm_in.write(input_data[i]);
  }

  // Call your top function (HLS will consume from strm_in and write to strm_out)
  dut(strm_in, strm_out);
  
  // Read all outputs back from strm_out into output_data
  for (int i = 0; i < OUTPUT_SIZE; i++) {
    if (strm_out.empty()) {
      std::cerr << "Error: strm_out became empty early at index " << i << std::endl;
      return 1;
    }
    output_data[i] = strm_out.read();
  }

  std::cout << "  Design execution completed." << std::endl;
  std::cout << "  First 5 output values: ";
  for (int i = 0; i < 5; i++) {
    std::cout << static_cast<int>(output_data[i]) << " ";
  }
  std::cout << std::endl;

  //=========================================================================
  // Step 3: Write output data to file
  //=========================================================================
  std::cout << "\n[Step 3] Writing output data to 'output.data'..." << std::endl;
  std::ofstream outfile("output.data");
  
  if (!outfile.is_open()) {
    std::cerr << "Error: Unable to open 'output.data' for writing!" << std::endl;
    return 1;
  }

  for (int i = 0; i < OUTPUT_SIZE; i++) {
    outfile << static_cast<int>(output_data[i]) << std::endl;
  }
  outfile.close();
  
  std::cout << "  Successfully wrote " << OUTPUT_SIZE << " output values." << std::endl;

  //=========================================================================
  // Step 4: Compare with golden reference (if exists)
  //=========================================================================
  std::cout << "\n[Step 4] Checking for golden reference..." << std::endl;
  std::ifstream goldenfile("golden.data");
  
  if (goldenfile.is_open()) {
    std::cout << "  Found 'golden.data', performing comparison..." << std::endl;
    
    int golden_count = 0;
    while (std::getline(goldenfile, line) && golden_count < OUTPUT_SIZE) {
      golden_data[golden_count] = static_cast<data_t>(std::stoi(line));
      golden_count++;
    }
    goldenfile.close();

    if (golden_count != OUTPUT_SIZE) {
      std::cerr << "  Warning: Expected " << OUTPUT_SIZE << " golden values, but read " 
                << golden_count << std::endl;
    } else {
      int mismatch_count = 0;
      int max_abs_error = 0;
      long long total_abs_error = 0;
      for (int i = 0; i < OUTPUT_SIZE; i++) {
        int abs_error = std::abs(static_cast<int>(output_data[i]) - static_cast<int>(golden_data[i]));
        total_abs_error += abs_error;
        if (abs_error > max_abs_error) {
          max_abs_error = abs_error;
        }

        if (abs_error != 0) {
          if (mismatch_count < 10) {
            std::cout << "    Mismatch at index " << i 
                      << ": HLS=" << static_cast<int>(output_data[i])
                      << ", Golden=" << static_cast<int>(golden_data[i])
                      << ", AbsErr=" << abs_error << std::endl;
          }
          mismatch_count++;
        }
      }

      double avg_error = static_cast<double>(total_abs_error) / OUTPUT_SIZE;
      
      std::cout << "\n  Comparison Results:" << std::endl;
      std::cout << "    Total mismatches: " << mismatch_count << " / " << OUTPUT_SIZE 
                << " (" << std::setprecision(2) << (mismatch_count * 100.0 / OUTPUT_SIZE) 
                << "%)" << std::endl;
      std::cout << "    Max absolute error: " << max_abs_error << std::endl;
      std::cout << "    Average absolute error: " << avg_error << std::endl;
      
      if (mismatch_count == 0) {
        std::cout << "\n  ✓ TEST PASSED! All values match exactly." << std::endl;
      } else {
        std::cout << "\n  ✗ TEST FAILED! Found " << mismatch_count << " mismatches." << std::endl;
      }
    }
  } else {
    std::cout << "  No 'golden.data' found. Skipping comparison." << std::endl;
  }

  std::cout << "\n========================================" << std::endl;
  std::cout << "Testbench completed successfully!" << std::endl;
  std::cout << "========================================" << std::endl;
  
  return 0;
}
