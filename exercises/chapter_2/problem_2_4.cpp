/* Write code that declares four 2 × 2 matrices of double precision floating point
numbers, A, B, C, D, and assigns values to the entries of A and B. Let C = A + B, and
D=A*B.Extend your code so that it calculates the entries of C and D, and then prints
the entries of these matrices to screen.

Compile:
clang++ problem_2_4.cpp  ../../library/vector_functions.cpp -I../../library -o problem_2_4.exe

run:
.\problem_2_4.exe

*/

#include <iostream>

#include "../../Library/vector_functions.hpp"

int main(int argc, char* argv[])
{
    // setup variables
    double u[3]={1.0,2.0,3.0};
    double v[3]={6.0,5.0,4.0};
    double A[3][3]={{1.0,5.0,0.0},
                    {7.0,1.0,2.0},
                    {0.0,0.0,1.0}};

    double B[3][3]={{-2.0,0.0,1.0},
                    {1.0,0.0,0.0},
                    {4.0,1.0,0.0}};


    double w[3];
    for (int i=0; i<3; i++)
    {
        w[i] = u[i] - 3.0*v[i];
    }

    // Calculate x = u - v

    double x[3];
    for (int i=0; i<3; i++)
    {
        x[i] = u[i] - v[i];
    }
    std::cout <<"Vector x:" << "\n";
    print_vector(x);
    std::cout <<"\n";


    // Calculate y = A@u
    double y[3];
    for (int i=0; i<3; i++)
    {
        y[i] = 0.0;
        for (int j=0; j<3; j++)
        {
            y[i] += A[i][j] * u[j];
        }


    }
    std::cout <<"Vector y:" << "\n";
    print_vector(y);
    std::cout <<"\n";

    // Calculate z = A@u - v
    double z[3];
    for (int i = 0; i<3; i++)
    {
        z[i] = -v[i];
        for (int j=0; j<3; j++)
        {
            z[i] += A[i][j] * u[j];
        }
    }
    std::cout <<"Vector z:" << "\n";
    print_vector(z);
    std::cout <<"\n";




    // Calculate C = 4A - 3B

    double C[3][3];
    for (int i = 0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            C[i][j] = 4*A[i][j] - 3*B[i][j];
        }
    }
    std::cout <<"Matrix C:" << "\n";
    print_matrix(C);

    print_vector(C[0]);

    
    double D[3][3];
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            D[i][j] = 0.0;
            for (int k=0; k<3; k++)
            {
                D[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    std::cout << "Matrix D"<< "\n";
    print_matrix(D);

    double test[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::cout << test[0][1];


    return 0;

}