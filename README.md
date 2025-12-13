


# ECE6775 Final Project – FlashAttention HLS Branch

This branch is used for implementing and validating FlashAttention in Vivado HLS, including the baseline, unoptimized version, and optimized implementations with different numerical precisions.

---

## Overall Workflow

### 1. PyTorch Baseline Data Generation

A PyTorch-based attention baseline is used to generate:

- **Input data**: fed into the HLS design
- **Golden data**: used by the HLS testbench to verify design correctness

Relevant code:

python_baseline.py


In the main function, the data type must be **manually selected** to validate designs with different precisions:

```python
if __name__ == "__main__":
    # Optional types: torch.float32, torch.int8, torch.int16, torch.int32
    test_attention_with_dtype(torch.int8)
```

Each `dtype` corresponds to a specific HLS design and must be tested separately.

---

### 2. HLS Design Verification

The HLS verification flow is as follows:

* PyTorch generates input and golden data
* HLS testbench reads input data
* HLS design computes the output
* The output is compared against golden data to check correctness

---

## Vivado HLS Execution

Different TCL scripts are used to run different versions of the design:

| TCL File                  | Description                                       |
| ------------------------- | ------------------------------------------------- |
| `run_atten.tcl`           | PyTorch / C++ baseline attention                  |
| `run.tcl`                 | FlashAttention **unoptimized version**            |
| `run_flash_opt.tcl`       | **INT8** optimized FlashAttention implementation  |
| `run_flash_opt_float.tcl` | **Float** optimized FlashAttention implementation |
| `run_bistream.sh`         | generate bitstream                                |

Example command:

```bash
vivado_hls -f run_flash_opt.tcl
```
---



