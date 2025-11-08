import numpy as np
import torch
from torch import nn
import torch.nn.functional as F
def test_batchnorm_layer():
    # Parameters for small test size
    batch_size, context_length,hiddensize, num_heads = 4, 16, 64, 4
    X = torch.randn(batch_size, context_length, 3*hiddensize)
    q,k,v = X.split(hiddensize,dim=2)
    
    q = q.view(batch_size,context_length,num_heads, hiddensize//num_heads).transpose(1,2) # B nh T hd
    k = k.view(batch_size,context_length,num_heads, hiddensize//num_heads).transpose(1,2) # B nh T hd
    v = v.view(batch_size,context_length,num_heads, hiddensize//num_heads).transpose(1,2) # B nh T hd
    attention = F.scaled_dot_product_attention(q,k,v,is_causal=False)


    # Flatten arrays in the correct order for C++ implementation
    X_flat = X.flatten()
    # Step 1: Write input data to files for host.cpp
    with open("input.data", "w") as f:
        for val in X_flat:
            f.write(f"{val}\n")
            
    # # Initialize output buffer with zeros
    # output_size = batch_size * num_channels * height * width
    # with open("input5.data", "w") as f:
    #     for _ in range(output_size):
    #         f.write("0.0\n")

    print("Please run host.cpp now to generate output.data, then press Enter to continue...")
    input()

    # Read and process the output
    output_data = []
    with open("output.data", "r") as f:
        for line in f:
            output_data.append(float(line.strip()))
    
    # Reshape to match expected dimensions
    output_array = np.array(output_data).reshape(batch_size,context_length,num_heads, hiddensize//num_heads)
    output_array = output_array.transpose(0, 2, 1, 3)

    # Compare with PyTorch reference
    print("Comparing with PyTorch reference...")
    try:
        np.testing.assert_allclose(output_array, attention, rtol=1e-05, atol=1e-03)
        print("Test PASSED! The flash attension matches the PyTorch reference.")
    except AssertionError as e:
        print("Test FAILED!")
        print(e)
    
    # Print some stats about the difference
    diff = np.abs(output_array - attention.numpy())
    max_diff = np.max(diff)
    mean_diff = np.mean(diff)
    print(f"Maximum absolute difference: {max_diff}")
    print(f"Mean absolute difference: {mean_diff}")

if __name__ == "__main__":
    test_batchnorm_layer()