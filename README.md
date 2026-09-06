# Minix AI Scheduler

An experimental adaptive CPU scheduler for MINIX 3 that replaces static multi-level feedback loops with telemetry-driven burst prediction.

## Architectural Overview
* **Process Control Block Extension**: Injects tracking fields into `proc.h` to monitor cumulative CPU time, I/O wait frequency, and recent burst lengths.
* **Heuristic Weighting Engine**: Implements exponential moving averages in `schedule.c` to classify tasks as interactive or batch-bound dynamically.
* **Microkernel IPC Bridge**: Extracts kernel telemetry safely across process boundaries to user-space monitoring routines.

## Building and Testing
Compiled and tested within the MINIX 3 source tree under QEMU emulation.
