//=========================================================================
// testbench.cpp  (int8 IO Version - Matches Kernel)
//=========================================================================
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include "hls_stream.h"
#include <cstdint>

typedef int8_t data_t;

const int BATCH_SIZE      = 4;
const int CONTEXT_LENGTH  = 16;
const int HIDDEN_SIZE     = 64;
const int NUM_HEADS       = 4;
const int HEAD_DIM        = HIDDEN_SIZE / NUM_HEADS;
const int THREE_H         = 3 * HIDDEN_SIZE;

const int INPUT_SIZE  = BATCH_SIZE * CONTEXT_LENGTH * THREE_H;                 
const int OUTPUT_SIZE = BATCH_SIZE * CONTEXT_LENGTH * NUM_HEADS * HEAD_DIM;    

extern "C" void dut(hls::stream<data_t> &strm_in,
                    hls::stream<data_t> &strm_out);

int main() {
  std::cout << "========================================" << std::endl;
  std::cout << "Flash Attention Testbench (int8)" << std::endl;
  std::cout << "========================================" << std::endl;

  static data_t input_data [INPUT_SIZE];
  static data_t output_data[OUTPUT_SIZE];
  static data_t golden_data[OUTPUT_SIZE];

  // Initialize output
  for (int i = 0; i < OUTPUT_SIZE; i++) output_data[i] = 0;

  //=========================================================================
  // Step 1: Read input data (Float)
  //=========================================================================
  std::cout << "\n[Step 1] Reading input data from 'input.data'..." << std::endl;
  std::ifstream infile("input.data");
  
  if (!infile.is_open()) {
    infile.open("../input.data");
    if (!infile.is_open()) {
        std::cerr << "Error: Unable to open 'input.data'!" << std::endl;
        return 1;
    }
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

  //=========================================================================
  // Step 2: Call DUT
  //=========================================================================
  std::cout << "\n[Step 2] Running HLS design..." << std::endl;
  
  hls::stream<data_t> strm_in;
  hls::stream<data_t> strm_out;

  // 1. Send int8 values
  for (int i = 0; i < INPUT_SIZE; i++) {
    strm_in.write(input_data[i]);
  }

  // 2. Call DUT
  dut(strm_in, strm_out);
  
  // 3. Receive Float Bits
  for (int i = 0; i < OUTPUT_SIZE; i++) {
    if (strm_out.empty()) {
      std::cerr << "Error: strm_out became empty early at index " << i << std::endl;
      return 1;
    }
    output_data[i] = strm_out.read();
  }

  std::cout << "  Design execution completed." << std::endl;

  //=========================================================================
  // Step 3: Write output data
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
  
  //=========================================================================
  // Step 4: Compare with golden reference
  //=========================================================================
  std::cout << "\n[Step 4] Checking for golden reference..." << std::endl;
  std::ifstream goldenfile("golden.data");
  if (!goldenfile.is_open()) goldenfile.open("../golden.data");
  
  if (goldenfile.is_open()) {
    std::cout << "  Found 'golden.data', performing comparison..." << std::endl;
    
    int golden_count = 0;
    while (std::getline(goldenfile, line) && golden_count < OUTPUT_SIZE) {
      golden_data[golden_count] = static_cast<data_t>(std::stoi(line));
      golden_count++;
    }
    goldenfile.close();

    int mismatch_count = 0;
    int max_error = 0;

    for (int i = 0; i < OUTPUT_SIZE; i++) {
      int diff = std::abs(static_cast<int>(output_data[i]) - static_cast<int>(golden_data[i]));
      if (diff > max_error) max_error = diff;
      if (diff != 0) {
        if (mismatch_count < 10) {
          std::cout << "    Mismatch at index " << i 
                    << ": DUT=" << static_cast<int>(output_data[i])
                    << ", Golden=" << static_cast<int>(golden_data[i])
                    << ", Diff=" << diff << std::endl;
        }
        mismatch_count++;
      }
    }

    if (mismatch_count == 0) {
      std::cout << "\n  [PASS] All values match within tolerance." << std::endl;
    } else {
      std::cout << "\n  [FAIL] Found " << mismatch_count << " mismatches." << std::endl;
      std::cout << "  Max absolute error: " << max_error << std::endl;
    }
  } else {
    std::cout << "  No 'golden.data' found. Skipping comparison." << std::endl;
  }

  std::cout << "\n========================================" << std::endl;
  return 0;
}
