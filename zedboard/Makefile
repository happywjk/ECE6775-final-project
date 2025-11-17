#==========================================================================
# Makefile
#==========================================================================
# @brief: A makefile the compiles and runs the bnn program
#
# @desc: 1. "make" or "make sw" runs software execution by default
#        2. "make fpga" invokes the HW accelerator
#        3. "make clean" cleans up the directory


INC_PATH=/usr/include/vivado_hls
CFLAGS = -I${INC_PATH} -DHLS_NO_XIL_FPO_LIB -O3

.PHONY: all sw fpga

all: sw

flashattention-arm: flash_atten.cpp flash_atten_test.cpp
	g++ ${CFLAGS} $^ -o $@

result/flashattention_arm_sim.txt: flashattention-arm
	@echo "Compiling & executing flashattention software program on ARM ..."
	mkdir -p result
	./$< | tee $@

sw: result/flashattention_arm_sim.txt
	@echo "Result saved to $@"

flashattention-fpga: host.cpp flash_atten.cpp
	@echo "Compiling host + FPGA DUT"
	g++ ${CFLAGS} $^ -o $@
	@echo "Make sure bitstream is loaded!"

fpga: flashattention-fpga
	@echo "Running flashattention accelerator ..."
	./$<

# Clean up the directory before submission
clean:
	@echo "Clean up output files"
	rm -rf flashattention-arm vivado_hls.log *.prj result out.dat *~
	rm -rf flashattention-fpga
