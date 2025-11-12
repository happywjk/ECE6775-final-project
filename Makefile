#==========================================================================
# Makefile
#==========================================================================
# @brief: A makefile for Flash Attention HLS project
#
# @desc: 1. Enter "make test" to run Python baseline and generate test data
#        2. Enter "make csim" to run C simulation
#        3. Enter "make synth" to run synthesis
#        4. Enter "make clean" to clean up the directory

# Extract Vivado HLS include path
XILINX_VIVADO?=/opt/xilinx/Vivado/2019.2
XIL_HLS=source $(XILINX_VIVADO)/settings64.sh; vivado_hls
VHLS_INC=$(XILINX_VIVADO)/include

# Specify compilation flags
CFLAGS=-g -I${VHLS_INC} -std=c++11

.PHONY: all clean test csim synth help

# Default target
all: test csim

# Generate test data using Python
test:
	@echo "Generating test data using Python baseline..."
	python3 python_baseline.py

# Run C simulation
csim: input.data golden.data
	@echo "Running C simulation..."
	$(XIL_HLS) -f run_test.tcl

# Run synthesis
synth: input.data
	@echo "Running synthesis..."
	$(XIL_HLS) -f run_test.tcl

# Clean up the directory
clean:
	@echo "Cleaning up output files..."
	rm -rf output.data
	rm -rf flash_attention_proj
	rm -rf out.prj
	rm -rf vivado_hls.log
	rm -rf *~
	@echo "Clean complete!"

# Help message
help:
	@echo "Flash Attention HLS Makefile"
	@echo "============================"
	@echo "Available targets:"
	@echo "  make test   - Generate input.data and golden.data using Python"
	@echo "  make csim   - Run C simulation"
	@echo "  make synth  - Run synthesis"
	@echo "  make clean  - Clean up output files"
	@echo "  make all    - Run test and csim (default)"
	@echo "  make help   - Show this help message"