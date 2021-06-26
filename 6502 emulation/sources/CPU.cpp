#include"CPU.h"

struct CPU
{
    WORD PC; //program counter
    WORD SP; //stack pointer
    BYTE A, X, Y; //registers

    //status flags
    BYTE C : 1;
    BYTE Z : 1;
    BYTE I : 1;
    BYTE D : 1;
    BYTE B : 1;
    BYTE V : 1;
    BYTE N : 1;

    void reset()
    {
        PC = 0xFFFC;
        SP = 0x0100;
        A = X = Y = 0;
        C = Z = I = D = B = V = N = 0;
    }
};


