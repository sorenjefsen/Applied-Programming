/* Write code that declares two vectors as arrays of double precision floating point
numbers of length 3 and assigns values to each of the entries. Extend this code so that
it calculates the scalar (dot) product of these vectors and prints it to screen. Finally,
extend the code so that it prints the Euclidean norm of both vectors to screen.

Compile:
clang++ problem_1_3.cpp -o problem_1_3.exe

run:
.\problem_1_3.exe

*/

# include <iostream>
# include <cmath>

int main()
{
    double A[3] = {3.2, 4.1, 1.0};
    double B[3] = {10.3, 6.2, 8.7};

    double dot_product = A[0] * B[0] + A[1] * B[1] + A[2] * B[2];
    
    std::cout << "The dot product is: " << dot_product;


    double norm_A, norm_B;
    norm_A = std::sqrt(A[0]*A[0] + A[1]*A[1] + A[2] * A[2]);
    norm_B = std::sqrt(B[0]*B[0] + B[1]*B[1] + B[2] * B[2]);

    std::cout << "\nThe euclidean norm is: \n";

    std::cout << "Vector A: " << norm_A;

    std::cout << "\nVector B: " << norm_B;
    

    return 0;
}