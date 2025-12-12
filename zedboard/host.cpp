#include <cstdio>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>

#include <hls_stream.h>
#include <ap_int.h>

typedef ap_uint<32> bit32_t;

static const int B  = 4;
static const int T  = 16;
static const int H  = 64;
static const int NH = 4;
static const int HD = H / NH;

static const int THREE_H   = 3 * H;
static const int IN_ELEMS  = B * T * THREE_H;       // 4*16*192 = 12288
static const int OUT_ELEMS = B * T * NH * HD;       // 4*16*4*16 = 4096

extern "C" void dut(hls::stream<bit32_t> &strm_in,
                    hls::stream<bit32_t> &strm_out);

int main() {
  const size_t in_elems  = IN_ELEMS;
  const size_t out_elems = OUT_ELEMS;

  std::cout << "in_elems  = " << in_elems  << "\n";
  std::cout << "out_elems = " << out_elems << "\n";

  std::vector<float> input(in_elems);
  std::vector<float> output(out_elems, 0.0f);

  // -----------------------------
  // Read input.data (text floats)
  // -----------------------------
  {
    std::ifstream fin("../../../../input.data");
    if (!fin) {
      std::cerr << "Failed to open input.data\n";
      return 1;
    }
    for (size_t i = 0; i < in_elems; ++i) {
      if (!(fin >> input[i])) {
        std::cerr << "Error reading input.data at index " << i << "\n";
        return 1;
      }
    }
  }

  // -----------------------------
  // Pack into input stream
  // -----------------------------
  hls::stream<bit32_t> strm_in;
  hls::stream<bit32_t> strm_out;

  for (size_t i = 0; i < in_elems; ++i) {
    union { uint32_t u; float f; } cvt;
    cvt.f = input[i];
    bit32_t word = (bit32_t)cvt.u;
    strm_in.write(word);
  }

  // -----------------------------
  // Call DUT
  // -----------------------------
  std::cout << "Calling dut()...\n";
  dut(strm_in, strm_out);
  std::cout << "dut() returned.\n";

  // -----------------------------
  // Read back from output stream
  // -----------------------------
  for (size_t i = 0; i < out_elems; ++i) {
    if (strm_out.empty()) {
      std::cerr << "ERROR: strm_out is empty at index " << i
                << " (expected " << out_elems << " elements)\n";
      return 1;
    }
    bit32_t word = strm_out.read();
    union { uint32_t u; float f; } cvt;
    cvt.u = (uint32_t)word;
    output[i] = cvt.f;
  }

  // -----------------------------
  // Write output.data
  // -----------------------------
  {
    std::ofstream fout("../../../../output.data");
    if (!fout) {
      std::cerr << "Failed to open output.data for write\n";
      return 1;
    }
    fout.setf(std::ios::fixed);
    fout << std::setprecision(7);
    for (size_t i = 0; i < out_elems; ++i) {
      fout << output[i] << "\n";
    }
  }

  // Optional: compare with golden.data if present
  {
    std::ifstream gfin("../../../../golden.data");
    if (gfin) {
      size_t golden_count = 0;
      size_t mismatches = 0;
      double max_abs_err = 0.0;
      for (size_t i = 0; i < out_elems; ++i) {
        double g;
        if (!(gfin >> g)) break;
        golden_count++;
        double diff = std::abs(output[i] - g);
        double thresh = 1e-2 + 1e-3 * std::abs(g);
        if (diff > thresh) {
          mismatches++;
          if (diff > max_abs_err) max_abs_err = diff;
        }
      }
      if (golden_count == out_elems) {
        if (mismatches == 0) {
          std::cout << "CHECK PASSED\n";
        } else {
          std::cout << "CHECK FAILED: mismatches=" << mismatches
                    << " max_abs_err=" << max_abs_err << "\n";
        }
      }
    }
  }
  std::cout << "Done. Wrote " << out_elems << " floats to output.data\n";
  return 0;
}
