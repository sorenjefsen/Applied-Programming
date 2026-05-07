/*
Compile:
clang++ problem_4_4.cpp  ../../library/vector_functions.cpp -I../../library -o problem_4_4.exe
clang++ problem_4_4.cpp  -o problem_4_3.exe

run:
.\problem_4_4.exe


First declare integer i and 
*/

#include <iostream>
//#include <fstream>
//#include <string>
// #include <cmath>
//#include <cassert>
# include "../../Library/vector_functions.hpp"

int main(int argc, char* argv[])
{
// initialize size of matrice
int rows = 2, cols = 2;

// initialize pointer A. This is a pointer to an array so two **
double** A;
A = new double* [rows];
for (int i = 0; i<rows; i++)
{
    A[i] = new double [cols];
}

// assign values
A[0][0] = 1;
A[0][1] = 2;
A[1][0] = 3;
A[1][1] = 4;

// we do the same for another matrix B
double** B;
B = new double* [rows];
for (int i = 0; i<rows; i++)
{
    B[i] = new double [cols];
}

// assign values
B[0][0] = 10;
B[0][1] = 20;
B[1][0] = 30;
B[1][1] = 40;

// Initialize C
double** C;
C = new double* [rows];
for (int i = 0; i<rows; i++)
{
    C[i] = new double [cols];
}

// Perform operations
for (int i = 0; i<rows; i++)
{
    for (int j= 0; j<cols; j++)
    {
        C[i][j] = A[i][j] + B[i][j];
    }
}

// Print result
for (int i = 0; i<rows; i++)
{
    for (int j= 0; j<cols; j++)
    {
        std::cout << C[i][j] << ", ";
    }
}
    

    return 0;
}