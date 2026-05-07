/*
Compile:
clang++ problem_5_6.cpp  ../../library/vector_functions.cpp -I../../library -o problem_5_6.exe
clang++ problem_5_6.cpp  -o problem_5_6.exe

run:
.\problem_5_6.exe

If this makes any problems: Check if we do inner/outer product correctly. 
*/

#include <iostream>
//#include <fstream>
//#include <string>
#include <cmath>
#include <cassert>
# include "../../Library/vector_functions.hpp"


void Multiply(double **res, double **A, double **B, int ARows, int ACols, int BRows, int BCols);
void Multiply(double *res, double *A, double **B, int ACols, int BRows, int BCols);
void Multiply(double *res, double **A, double *B, int ARows, int ACols, int BRows);
void Multiply(double **res, double scalar, double **B, int BRows, int BCols);
void Multiply(double **res, double **B, double scalar, int BRows, int BCols);



int main(int argc, char* argv[])
{

    // Setup size of matrices 
    int ARows = 2;
    int ACols = 2;
    int BRows = 2;
    int BCols = 2;
    int vLen = 2;

    // Initialize two matrices A and B, a vector v and a scalar s
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

    double *v;
    v = new double[vLen];
    v[0] = 10;
    v[1] = 20;

    double s = 4;

    //                         Lets test matrix multiplication

    // initialize a place to store the result
    // Again a matrice of pointers
    double **res_mat_mat;
    res_mat_mat = AllocateMatrixMemory(ARows, BCols);

    // Then we can call our function. It works only with pointers. 
    Multiply(res_mat_mat, A, B, ARows, ACols, BRows, BCols);

    // Print our result
    std::cout << "AB" << "\n";
    print_matrix(res_mat_mat, ARows, BCols);

    FreeMatrixMemory(ARows, res_mat_mat);


    //                        Lets test vector matrix multiplication

    double *res_vec_mat;
    res_vec_mat = new double[vLen];

    Multiply(res_vec_mat, v, A, vLen, ARows, ACols);
    std::cout << "vA" << "\n";
    print_vector(res_vec_mat, vLen);

    double *res_mat_vec;
    res_mat_vec = new double[vLen];

    Multiply(res_mat_vec, A, v, ACols, ARows, vLen);
    std::cout << "Av" << "\n";
    print_vector(res_mat_vec, vLen);

    //                        Lets test scalar matrix multiplication
    double **res_scal_mat;
    res_scal_mat = AllocateMatrixMemory(ARows, BRows);

    Multiply(res_scal_mat, s, A, ARows, ACols);
    std::cout << "sA" << "\n";
    print_matrix(res_scal_mat, ARows, ACols);

    double **res_mat_scal;
    res_mat_scal = AllocateMatrixMemory(ARows, BRows);

    Multiply(res_mat_scal, A, s, ARows, ACols);
    std::cout << "As" << "\n";
    print_matrix(res_mat_scal, ARows, ACols);


    

    // reset memory
    FreeMatrixMemory(ARows, A);
    FreeMatrixMemory(BRows, B);


    return 0;
}

// Multiply for two matrices
void Multiply(double **res, double **A, double **B, int ARows, int ACols, int BRows, int BCols)
{
    // Make error if dimensions are fucked
    assert(ACols == BRows);
    assert(ARows == BCols);

    // Loop through rows and columns
    for (int i=0; i <ARows; i++)
    {
        for (int j=0; j<ACols; j++)
        {
            // Do dot product loop, writing to res.
            res[i][j] = 0;
            for (int k=0; k<ACols; k++)
            {
                res[i][j] += A[i][k] * B[k][j];
            }

        }
    }
}

// Multiply for vector and matrix
void Multiply(double *res, double *A, double **B, int ACols, int BRows, int BCols)
{
    assert(ACols == BRows);

    for (int i=0; i<BCols; i++)
    {
        // Do dot product loop, writing to res
        res[i] = 0;
        for (int k=0; k<ACols; k++)
        {
            res[i] += A[k] * B[k][i];
        }
    }
}

// Multiply for matrix and vector

void Multiply(double *res, double **A, double *B, int ARows, int ACols, int BRows)
{
    assert(BRows == ARows);

    for (int i=0; i<BRows; i++)
    {
        // Do dot product loop, writing to res
        res[i] = 0;
        for (int k=0; k<BRows; k++)
        {
            res[i] += A[i][k] * B[k];
        }
    }
}

// Multiply for scaler and matrix
void Multiply(double **res, double scalar, double **B, int BRows, int BCols)
{
    for (int i=0; i<BRows; i++)
    {
        for (int j=0; j<BCols; j++)
        {
            res[i][j] = scalar * B[i][j];
        }

    }
}

// Multiply for matrix and scalar
void Multiply(double **res, double **B, double scalar, int BRows, int BCols)
{
    for (int i=0; i<BRows; i++)
    {
        for (int j=0; j<BCols; j++)
        {
            res[i][j] = B[i][j] * scalar;
        }

    }
}