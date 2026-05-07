/*
Compile:
clang++ problem_5_5.cpp  ../../library/vector_functions.cpp -I../../library -o problem_5_5.exe
clang++ problem_5_5.cpp  -o problem_5_5.exe

run:
.\problem_5_5.exe


*/

#include <iostream>
//#include <fstream>
//#include <string>
#include <cmath>
#include <cassert>
# include "../../Library/vector_functions.hpp"


double multiply(double **res, double **A, double **B, int ARows, int ACols, int BRows, int BCols);



int main(int argc, char* argv[])
{

    // Setup size of matrices 
    int ARows = 3;
    int ACols = 2;
    int BRows = 2;
    int BCols = 2;

    // Initialize two matrices A and B with some values. 
    // Here they are matrices of pointers.
    double **A, **B;
    A = AllocateMatrixMemory(ARows, ACols);
    B = AllocateMatrixMemory(BRows, BCols);

    A[0][0] = 1;
    A[0][1] = 2;
    A[1][0] = 3;
    A[1][1] = 4;
    B[0][0] = 10;
    B[0][1] = 20;
    B[1][0] = 30;
    B[1][1] = 40;



    // initialize a place to store the result
    // Again a matrice of pointers
    double **res;
    res = AllocateMatrixMemory(ARows, BCols);

    // Then we can call our function. It works only with pointers. 
    multiply(res, A, B, ARows, ACols, BRows, BCols);

    print_matrix(res, ARows, BCols);

    FreeMatrixMemory(ARows, A);
    FreeMatrixMemory(BRows, B);
    FreeMatrixMemory(ARows, res);


    return 0;
}


double multiply(double **res, double **A, double **B, int ARows, int ACols, int BRows, int BCols)
{
    assert(ACols != BRows);
    assert(ARows != BCols);

    for (int i=0; i <ARows; i++)
    {
        for (int j=0; j<ACols; j++)
        {
            res[i][j] = 0;
            for (int k=0; k<ACols; k++)
            {
                res[i][j] += A[i][k] * B[k][j];
            }

        }
    }
    return 0;
}
