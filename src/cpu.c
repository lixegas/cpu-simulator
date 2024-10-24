#include "cpu.h"
#include <stdio.h>
#include <string.h>

// Function to initialize the CPU state
void initializeCPU(struct CPU *cpu) {
    cpu->R1 = 0; 
    cpu->R2 = 0; 
    cpu->R3 = 0; 

   
    for (int i = 0; i < 50; i++) {
        cpu->memory[i] = 0;
    }

    cpu->programCounter = 0; 
}

// Function to execute a single instruction
void executeInstruction(struct CPU *cpu, char *instruction) {
    int value, address;

    // Execute the ADD instruction
    if (sscanf(instruction, "ADD R1, %d", &value) == 1) {
        cpu->R1 += value; 

    // Execute the SUB instruction
    } else if (sscanf(instruction, "SUB R2, %d", &value) == 1) {
        cpu->R2 -= value; 

    // Execute the MUL instruction
    } else if (sscanf(instruction, "MUL R1, %d", &value) == 1) {
        cpu->R1 *= value;

    // Execute the DIV instruction
    } else if (sscanf(instruction, "DIV R1, %d", &value) == 1) {
        if (value != 0) {
            cpu->R1 /= value;
        } else {
            printf("Error: division by zero.\n"); 
        }

    // Execute the LOAD instruction
    } else if (sscanf(instruction, "LOAD R3, MEM[%d]", &address) == 1) {
        if (address >= 0 && address < 50) { 
            cpu->R3 = cpu->memory[address]; 
        } else {
            printf("Error: memory address out of bounds.\n"); 
        }

    // Execute the STORE instruction
    } else if (sscanf(instruction, "STORE R1, MEM[%d]", &address) == 1) {
        if (address >= 0 && address < 50) { 
            cpu->memory[address] = cpu->R1; 
        } else {
            printf("Error: memory address out of bounds.\n");
        }

    // Execute the NOP instruction
    } else if (strcmp(instruction, "NOP") == 0) {
    } else {
        printf("Unrecognized instruction: %s\n", instruction);
    }
} 

// Function to print the current state of the CPU
void printState(struct CPU *cpu) {
    printf("CPU State:\n");
    printf("R1: %d, R2: %d, R3: %d\n", cpu->R1, cpu->R2, cpu->R3);
    printf("Memory:\n");

    for (int i = 0; i < 50; i++) {
        printf("Mem[%d]: %d\n", i, cpu->memory[i]);
    }
    printf("\n");
}

// Function to execute a program consisting of an array of instructions
void executeProgram(struct CPU *cpu, char *program[], int programLength) {
    // Execute each instruction in the program
    for (cpu->programCounter = 0; cpu->programCounter < programLength; cpu->programCounter++) {
        printf("Executing: %s\n", program[cpu->programCounter]);
        executeInstruction(cpu, program[cpu->programCounter]);
        printState(cpu); 
    }
} 
