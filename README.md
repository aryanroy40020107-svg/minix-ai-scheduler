# minix-ai-scheduler

Exploring the intersection of Tanenbaum’s MINIX 3 and low-level AI. This repo contains a custom MINIX kernel that exports telemetry to a hand-coded Python NN to predict CPU burst times. 

### Project Vision
Aiming to build a closed-ecosystem system controller for RISC-V hardware, similar to the Intel Management Engine. This is intended as long-term research for post-grad specialization.

### Tech Stack
- **OS:** MINIX 3 (Microkernel Architecture)
- **Language:** C (Kernel-side), Python (Inference-side)
- **Math:** Neural Networks from scratch (No heavy libraries)
- **Hardware Target:** RISC-V (VisionFive 2 / Milk-V Mars)




