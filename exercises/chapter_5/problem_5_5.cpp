/*
Compile:
clang++ problem_5_4.cpp  ../../library/vector_functions.cpp -I../../library -o problem_5_4.exe
clang++ problem_5_4.cpp  -o problem_5_4.exe

run:
.\problem_5_4.exe


*/

#include <iostream>
//#include <fstream>
//#include <string>
#include <cmath>
//#include <cassert>
# include "../../Library/vector_functions.hpp"


double multiply(double **res, double **A, double **B, int ARows, int ACols, int BRows, int BCols);



int main(int argc, char* argv[])
{

    // Setup size of matrices 
    int ARows = 2;
    int ACols = 2;
    int BRows = 2;
    int BCols = 2;

    double **A, **B;
    A = AllocateMatrixMemory(ARows, ACols);
    B = AllocateMatrixMemory(BRows, BCols);

    // Initialize matrices with values
    A[0][0] = 1;
    A[0][1] = 2;
    A[1][0] = 3;
    A[1][1] = 4;
    B[0][0] = 10;
    B[0][1] = 20;
    B[1][0] = 30;
    B[1][1] = 40;


    // initialize a place to store the result
    double res;
    double *p_res;
    p_res = &res;


    FreeMatrixMemory(ARows, A);
    

    return 0;
}


double multiply(double **res, double **A, double **B, int ARows, int ACols, int BRows, int BCols)
{
    return 0;
}
