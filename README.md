# Linux System Resource Monitor

A high-performance system monitoring tool developed in **C** for Linux environments. This project is designed to demonstrate low-level system interaction, file parsing, and process management.

## 1. Overview
This application retrieves real-time system metrics by directly interfacing with the Linux Kernel's virtual file system (`/proc`). It provides an efficient way to monitor hardware utilization without the overhead of heavy monitoring suites.

## 2. Key Features
- **Memory Tracking:** Parses `/proc/meminfo` to extract precise `MemTotal` and `MemFree` values.
- **CPU Utilization:** Implements a differential calculation algorithm. By sampling `/proc/stat` at 1-second intervals, it calculates the true CPU load percentage.
- **Modular Architecture:** Structured with a clean separation of concerns (`src/` for logic, `include/` for headers).
- **Automated Build System:** Integrated with a `Makefile` for streamlined compilation and deployment.

## 3. Technical Stack
- **Language:** C (Standard C11)
- **Environment:** Linux (Mint/Ubuntu)
- **Tools:** GCC, Make, Git

## 4. Installation & Build Instructions

### Step 1: Clone the Repository
```bash
git clone [https://github.com/YOUR_USERNAME/Linux-System-Monitor-C.git](https://github.com/YOUR_USERNAME/Linux-System-Monitor-C.git)
cd Linux-System-Monitor-C
