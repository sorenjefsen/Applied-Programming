/* Write code that declares four 2 × 2 matrices of double precision floating point
numbers, A, B, C, D, and assigns values to the entries of A and B. Let C = A + B, and
D=A*B.Extend your code so that it calculates the entries of C and D, and then prints
the entries of these matrices to screen.

Compile:
clang++ problem_2_5.cpp  ../../library/vector_functions.cpp -I../../library -o problem_2_5.exe

run:
.\problem_2_5.exe

*/

#include <iostream>
#include <cassert>

#include "../../Library/vector_functions.hpp"

int main(int argc, char* argv[])
{
    double A[2][2] = {{4, 10}, {1, 1}};

    // A_inv = 1/(ad-bc) * ((d, -b), (-c, a))





    double A_inv[2][2];
    double factor = A[0][0]*A[1][1] - A[1][0]*A[0][1];

    assert(factor != 0.0);

    A_inv[0][0] = A[1][1]/factor;
    A_inv[1][0] = -A[1][0]/factor;
    A_inv[0][1] = -A[0][1]/factor;
    A_inv[1][1] = A[0][0]/factor;

    std::cout << A_inv[0][0];
    std::cout << A_inv[1][0] << "\n";
    std::cout << A_inv[0][1];
    std::cout << A_inv[1][1] << "\n";

    return 0;

}