#include <cstdio>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>


extern "C" void top(float *input_data, float *output_data);

static const int B  = 4;
static const int T  = 16;
static const int H  = 64;
static const int NH = 4;
static const int HD = H / NH;

int main() {
  const size_t in_elems  = (size_t)B * T * (3 * H);
  const size_t out_elems = (size_t)B * T * NH * HD;
    system("pwd");
  std::vector<float> input(in_elems);
  std::vector<float> output(out_elems, 0.0f);


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


  top(input.data(), output.data());


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

  std::cout << "Done. Wrote " << out_elems << " floats to output.data\n";
  return 0;
}
