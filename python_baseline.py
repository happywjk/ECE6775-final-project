import numpy as np
import torch
from torch import nn
import torch.nn.functional as F

def quantize_tensor(x, dtype):
    """Quantize tensor to the specified integer type (int8/int16/int32)"""
    if dtype == torch.float32:
        return x, 1.0  # No quantization
    qmin = torch.iinfo(dtype).min
    qmax = torch.iinfo(dtype).max
    max_val = torch.max(torch.abs(x))
    scale = max_val / qmax if max_val != 0 else 1.0
    x_q = torch.clamp((x / scale).round(), qmin, qmax).to(dtype)
    return x_q, scale

def dequantize_tensor(x_q, scale, dtype):
    """Dequantize back to float"""
    if dtype == torch.float32:
        return x_q
    return x_q.float() * scale

def test_attention_with_dtype(dtype=torch.float32):
    torch.manual_seed(42)
    np.random.seed(42)
    # Basic parameters
    batch_size, context_length, hidden_size, num_heads = 4, 16, 64, 4
    X = torch.randn(batch_size, context_length, 3 * hidden_size, dtype=torch.float32)

    # Quantize input
    X_q, scale = quantize_tensor(X, dtype)
    X_deq = dequantize_tensor(X_q, scale, dtype)

    # Split q, k, v
    q, k, v = X_deq.split(hidden_size, dim=2)
    q = q.view(batch_size, context_length, num_heads, hidden_size // num_heads).transpose(1, 2)
    k = k.view(batch_size, context_length, num_heads, hidden_size // num_heads).transpose(1, 2)
    v = v.view(batch_size, context_length, num_heads, hidden_size // num_heads).transpose(1, 2)

    # Compute attention
    attention = F.scaled_dot_product_attention(q, k, v, is_causal=False)

    # Write input data
    X_flat = X_q.flatten()
    with open("input.data", "w") as f:
        for val in X_flat:
            f.write(f"{val.item()}\n")
    # Write golden data for HLS testbench
    # attention shape is (B, nh, T, hd), need to reorder to (B, T, nh, hd)
    attention_reordered = attention.transpose(1, 2)  # (B, T, nh, hd)
    golden_flat = attention_reordered.flatten()
    with open("golden.data", "w") as f:
        for val in golden_flat:
            f.write(f"{float(val):.10f}\n")

    print(f"Please run host.cpp using dtype={dtype}, then press Enter to continue...")
    input()

    # Read output
    output_data = []
    with open("output.data", "r") as f:
        for line in f:
            output_data.append(float(line.strip()))
    # HLS writes in order (B, T, nh, hd); reshape accordingly then transpose to (B, nh, T, hd)
    output_array = np.array(output_data).reshape(batch_size, context_length, num_heads, hidden_size // num_heads).transpose(0, 2, 1, 3)

    # Compare
    output_array_torch = torch.tensor(output_array)
    np.testing.assert_allclose(output_array_torch.numpy(), attention.numpy(), rtol=1e-3, atol=1e-2)
    print("Test PASSED! The output matches the PyTorch reference.")

if __name__ == "__main__":
    # Optional types: torch.float32, torch.int8, torch.int16, torch.int32
    test_attention_with_dtype(torch.float32)