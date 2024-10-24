# CPU Simulator Project

## Overview

This project is a simple CPU simulator that mimics the basic operations of a central processing unit (CPU). It executes a series of predefined instructions and maintains a state that includes CPU registers and memory. 
The simulator is designed to help users understand how a CPU processes instructions and manages data.

#### Built with
[![My Skills](https://skillicons.dev/icons?i=c)](https://skillicons.dev)

## Features

- **Registers**: The CPU has three registers (R1, R2, and R3) that store intermediate values during computation.
- **Memory**: The simulator features a memory array with 50 cells, allowing it to store and retrieve data.
- **Instruction Set**: The simulator supports a simple instruction set, including:
  
  - `ADD`: Adds a value to a register.
  - `SUB`: Subtracts a value from a register.
  - `MUL`: Multiplies a register by a value.
  - `DIV`: Divides a register by a value (with zero division error handling).
  - `LOAD`: Loads a value from memory into a register.
  - `STORE`: Stores a value from a register into memory.
  - `NOP`: Represents a no-operation instruction.

## Files

- **cpu.h**: Header file containing the structure definitions and function declarations.
- **cpu.c**: Implementation file that defines the CPU operations and instruction execution.
- **main.c**: The main program that initializes the CPU, defines a sample program, and executes it.

## How It Works

1. **Initialization**: When the program starts, it initializes the CPU state by setting all registers and memory cells to zero.
2. **Instruction Execution**: The program executes each instruction in the defined program sequentially. After executing each instruction, the current state of the CPU (register values and memory contents) is printed to the console.
3. **Memory Management**: The simulator allows the user to store and load data from memory, demonstrating how a CPU interacts with memory during execution.

## Installation Guide

### Requisites

- **GCC** (GNU Compiler Collection) or any other C compiler.
- **Make** (optional, for automated build processes).

### Installation

1. Clone the GitHub repository to a directory of your choice:

   ```bash
   git clone https://github.com/lixegas/cpu-simulator.git

2. Navigate to the project directory:
   
    cd cpu-simulator/src

3. Compile the project using GCC (or another C compiler):

    gcc -o cpu_simulator main.c cpu.c

4. Run the executable:

    ./cpu_simulator

## License

This project is licensed under the MIT license.

