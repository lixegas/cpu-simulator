// cpu.h - Header file for CPU simulator

#ifndef CPU_H
#define CPU_H

// Structure representing the CPU
struct CPU {
    int R1, R2, R3;        
    int memory[50];       
    int programCounter;    
};

// Function declarations
void initializeCPU(struct CPU *cpu);
void executeInstruction(struct CPU *cpu, char *instruction);
void printState(struct CPU *cpu);
void executeProgram(struct CPU *cpu, char *program[], int programLength);

#endif
