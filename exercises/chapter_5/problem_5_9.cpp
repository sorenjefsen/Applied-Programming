/*
Compile:
clang++ problem_5_9.cpp  ../../library/vector_functions.cpp -I../../library -o problem_5_9.exe
clang++ problem_5_9.cpp  -o problem_5_9.exe

run:
.\problem_5_9.exe

If this makes any problems: Check if we do inner/outer product correctly. 
*/

#include <iostream>
//#include <fstream>
//#include <string>
#include <cmath>
#include <cassert>
#include "../../Library/vector_functions.hpp"


void solve3by3(double **A, double *b, double *u);


int main(int argc, char* argv[])
{
    // Setup a matrix A and vector b
    int n = 3;
    double **A;
    A = AllocateMatrixMemory(n, n);

    A[0][0] = 1; A[0][1] = 2; A[0][2] = 3;
    A[1][0] = 3; A[1][1] = 2; A[1][2] = -3;
    A[2][0] = -2; A[2][1] = 6; A[2][2] = 3;

    double *b;
    b = new double[n];
    b[0] = 4; b[1] = 3; b[2] = 6;

    double *u;
    u = new double[n];

    
    solve3by3(A, b, u);

    return 0;
}

void solve3by3(double **A, double *b, double *u)
{
    double factor;
    print_matrix(A, 3, 3);

    ////// Forward
    for (int i=0; i<3;i++)
    {
        // Partial pivoting: choose row with largest absolute pivot entry.
        int pivot_row = i;
        for (int r = i + 1; r < 3; r++)
        {
            if (std::fabs(A[r][i]) > std::fabs(A[pivot_row][i]))
            {
                pivot_row = r;
            }
        }

        if (pivot_row != i)
        {
            double* temp_row = A[i];
            A[i] = A[pivot_row];
            A[pivot_row] = temp_row;

            double temp_b = b[i];
            b[i] = b[pivot_row];
            b[pivot_row] = temp_b;
        }

        // Normalize row i with factor A[i][i]
        factor = A[i][i];
        assert(std::fabs(factor) > 1e-12);
        for (int k=i; k<3; k++)
        {
            A[i][k] = A[i][k]/factor;
        }
        b[i] = b[i]/factor;

        // Eleminate other row j using row i. 

        for (int j = i+1; j<3; j++)
        {
        
            factor = A[j][i];
            for (int k = 0; k<3; k++)
            {
                A[j][k] = A[j][k] - factor * A[i][k];
            }
            b[j] = b[j] - factor*b[i];
        }


    }

    /////// Backwards
    for (int i = 2; i >= 0; i--)
    {
        double sum = 0.0;
        for (int j = i + 1; j < 3; j++)
        {
            sum += A[i][j] * u[j];
        }
        u[i] = b[i] - sum;
    }

    print_matrix(A, 3, 3);
    print_vector(b, 3);
    print_vector(u, 3);
}
