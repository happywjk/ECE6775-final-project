# Create project
open_project flash_attention_proj
set_top top

# Add files
add_files flash_atten.cpp
add_files -tb flash_atten_test.cpp
add_files -tb input.data
add_files -tb golden.data

# Solution settings
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default

# Run C Simulation
csim_design

# Run Synthesis
csynth_design

# Run Co-Simulation
cosim_design

exit