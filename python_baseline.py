import numpy as np
import torch
from torch import nn
import torch.nn.functional as F

FRAC_BITS = 24  # 24 fractional bits -> matches ap_fixed<32,8>
SCALE = 0.25    # 1/sqrt(16), HEAD_DIM=16

def quantize(x):
    s = 1 << FRAC_BITS
    return torch.round(x * s) / s

@torch.no_grad()
def exp_fixed(x):
    x = torch.clamp(x, min=-8.0, max=0.0)
    x2 = x * x
    x3 = x2 * x
    return 1.0 + x + 0.5 * x2 + (1.0/6.0) * x3

@torch.no_grad()
def attention_fixed(q, k, v):
    B, nh, T, hd = q.shape
    out = torch.zeros_like(q)
    for b in range(B):
        for h in range(nh):
            for tq in range(T):
                dot = torch.sum(q[b,h,tq] * k[b,h], dim=-1)
                dot = quantize(dot)
                s = quantize(dot * SCALE)
                max_s = torch.max(s)
                e = exp_fixed(quantize(s - max_s))
                sum_e = torch.sum(e)
                inv_sum = 1.0 / (sum_e + 1e-6)
                w = quantize(e * inv_sum)
                acc = torch.sum(w.unsqueeze(-1) * v[b,h], dim=0)
                out[b,h,tq] = quantize(acc)
    return out

def test_batchnorm_layer():

    torch.manual_seed(42)
    np.random.seed(42)
    
    batch_size, context_length, hiddensize, num_heads = 4, 16, 64, 4
    X = torch.randn(batch_size, context_length, 3*hiddensize)

    # quantize inputs to fixed-point grid
    Xq = quantize(X)

    # split and reshape to (B, nh, T, hd)
    q,k,v = Xq.split(hiddensize,dim=2)
    q = q.view(batch_size,context_length,num_heads, hiddensize//num_heads).transpose(1,2)
    k = k.view(batch_size,context_length,num_heads, hiddensize//num_heads).transpose(1,2)
    v = v.view(batch_size,context_length,num_heads, hiddensize//num_heads).transpose(1,2)

    # fixed-point attention reference
    attention = attention_fixed(q,k,v)  # (B, nh, T, hd)

    # write fixed-point quantized input
    X_flat = Xq.flatten()
    with open("input.data", "w") as f:
        for val in X_flat:
            f.write(f"{float(val):.10f}\n")

    print("Please run HLS testbench now to generate output.data, then press Enter to continue...")
    input()

    # read HLS output (also decimal of fixed grid)
    output_data = []
    with open("output.data", "r") as f:
        for line in f:
            output_data.append(float(line.strip()))
    output_array = np.array(output_data).reshape(batch_size,context_length,num_heads, hiddensize//num_heads)
    output_array = np.transpose(output_array, (0,2,1,3))

    # compare
    print("Comparing with fixed-point reference...")
    ref = attention.numpy()
    try:
        np.testing.assert_allclose(output_array, ref, rtol=1e-05, atol=1e-03)
        print("Test PASSED! The fixed-point attention matches the Python fixed reference.")
    except AssertionError as e:
        print("Test FAILED!")
        print(e)
    diff = np.abs(output_array - ref)
    print(f"Maximum absolute difference: {np.max(diff)}")
    print(f"Mean absolute difference: {np.mean(diff)}")

    # write fixed-point golden in (B, T, nh, hd) flattened order
    attention_reordered = attention.transpose(1, 2)
    golden_flat = attention_reordered.flatten()
    with open("golden.data", "w") as f:
        for val in golden_flat:
            f.write(f"{float(val):.10f}\n")

    print("Generated fixed-point golden.data for HLS testbench")


if __name__ == "__main__":
    test_batchnorm_layer()