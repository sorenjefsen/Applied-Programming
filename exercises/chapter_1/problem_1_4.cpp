/* Write code that declares four 2 × 2 matrices of double precision floating point
numbers, A, B, C, D, and assigns values to the entries of A and B. Let C = A + B, and
D=A*B.Extend your code so that it calculates the entries of C and D, and then prints
the entries of these matrices to screen.

Compile:
clang++ problem_1_4.cpp -o problem_1_4.exe

run:
.\problem_1_4.exe

*/

# include <iostream>

int main()
{
    double A[2][2]={{1, 2}, {3, 4}}, B[2][2] = {{5, 6},{7, 8}}, C[2][2], D[2][2];

    C[0][0] = A[0][0] + B[0][0];
    C[0][1] = A[0][1] + B[0][1];
    C[1][0] = A[1][0] + B[1][0];
    C[1][1] = A[1][1] + B[1][1];

    D[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    D[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    D[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    D[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];

    std::cout << C << "\n";
    std::cout << D;
  

    return 0;
}