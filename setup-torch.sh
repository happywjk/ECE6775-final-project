#!/usr/bin/env bash
deactivate 2>/dev/null || true
unset PYTHONHOME PYTHONPATH
source "$HOME/venvs/torchcpu311/bin/activate"
export OMP_NUM_THREADS=4

echo "[OK] venv activated: $(which python) ($(python -V 2>&1))"
echo "[INFO] OMP_NUM_THREADS=$OMP_NUM_THREADS"