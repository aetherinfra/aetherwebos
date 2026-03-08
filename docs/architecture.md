# Aether WebOS Architecture

Aether WebOS is a bare-metal operating system built from first principles for the AArch64 architecture.

The system is designed with a clear subsystem structure to make experimentation, research, and contributor participation easier.

---

# High-Level Architecture

Aether WebOS consists of several major subsystems:
```bash
+------------------------------------------------+
| Kernel Core                                    |
+------------------------------------------------+
| Memory Management  | Interrupts  | Scheduler   |
+------------------------------------------------+
| Drivers (PCIe, UART, VirtIO, USB, Timer)       |
+------------------------------------------------+
| Networking Stack (Ethernet → ARP → IPv4 → TCP) |
+------------------------------------------------+
| Kernel UI / Services                           |
+------------------------------------------------+
| Hardware Layer (ARMv8 / QEMU virt platform)    |
+------------------------------------------------+
```

The system runs directly on hardware with no underlying operating system.

---

# Boot Process

The boot process begins at the architecture entry point.

Key stages:

1. CPU entry through `boot.S`
2. Exception vector setup
3. MMU initialization
4. Kernel memory initialization
5. Interrupt controller setup
6. Driver initialization
7. Network stack initialization
8. Kernel UI startup

Relevant files:
```bash
arch/aarch64/boot.S
arch/aarch64/vectors.S
arch/aarch64/mmu.c
```

---

# Kernel Core

The kernel core manages essential operating system responsibilities.

Primary responsibilities:

- system initialization
- memory management
- interrupt handling
- system health monitoring
- kernel services

Key components:
```bash
src/kernel/
```

Modules include:

- exception handling
- GIC interrupt controller support
- kernel health monitoring
- memory allocation
- portal interface

---

# Memory Management

Aether WebOS currently uses a custom kernel memory allocator.

Features:

- kernel heap initialization
- simple `kmalloc` / `kfree`
- memory usage tracking
- freestanding operation (no libc)

Memory management operates entirely within the kernel.

Relevant files:
```bash
src/kernel/memory.c
include/kernel/memory.h
```

---

# Interrupt System

Interrupts are handled using the ARM Generic Interrupt Controller (GIC).

Capabilities include:

- interrupt initialization
- interrupt dispatch
- timer interrupt handling
- system uptime tracking

Relevant components:
```bash
src/kernel/gic.c
include/kernel/gic.h
```

---

# Device Drivers

Drivers allow the kernel to interact directly with hardware devices.

Current drivers include:

- UART (PL011 console)
- PCIe device enumeration
- VirtIO networking
- USB xHCI controller
- system timer
- PSCI power control

Driver implementations are located in:
```bash
src/drivers/
```

Drivers communicate with hardware through memory-mapped I/O.

---

# Networking Stack

Aether WebOS implements a custom TCP/IP networking stack.

The networking stack is layered in the following order:
```bash
VirtIO-Net Driver
↓
Ethernet Layer
↓
ARP
↓
IPv4
↓
TCP
↓
HTTP service
```

Each protocol layer processes packets before passing them to the next layer.

Networking components are located in:
```bash
src/drivers/ethernet/
```

---

# TCP Stack

The TCP implementation is designed as a minimal research implementation.

Key features include:

- transmission control block (TCB)
- connection state tracking
- sequence and acknowledgement validation
- connection management
- multiple parallel connections

Current limitations:

- retransmission logic not yet implemented
- congestion control not yet implemented

---

# Kernel UI System

Aether includes a lightweight text-based kernel interface.

The UI is rendered through the UART console and supports multiple modes.

Available modes include:

- system portal
- network dashboard
- shutdown confirmation

The interface provides real-time system status and debugging information.

---

# Development Environment

The primary development and testing environment is:

- QEMU `virt` platform
- AArch64 architecture

This environment allows rapid testing of kernel functionality and drivers.

---

# Future Architectural Directions

Planned improvements include:

- SMP (multi-core support)
- filesystem support
- improved networking stability
- additional hardware drivers
- ARM hardware deployment
- distributed node orchestration

---

Aether WebOS is designed as a long-term systems research platform for exploring operating system architecture and low-level infrastructure software.