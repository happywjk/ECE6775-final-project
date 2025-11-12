#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/wl764/ece6775/ECE6775-final-project/flash_attention_proj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
