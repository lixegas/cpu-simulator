// main.c - Main program for the CPU simulator

#include "cpu.h"
#include <stdio.h>

int main() {
    struct CPU cpu; 
    initializeCPU(&cpu); 


    char *program[] = {
        "ADD R1, 5",          
        "MUL R1, 3",         
        "STORE R1, MEM[16]",  
        "LOAD R3, MEM[16]",   
        "SUB R2, 2",          
        "NOP"                 
    };

    int programLength = sizeof(program) / sizeof(program[0]); 

    executeProgram(&cpu, program, programLength); 

    return 0; 
}
