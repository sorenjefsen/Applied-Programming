/* Write code that declares four 2 × 2 matrices of double precision floating point
numbers, A, B, C, D, and assigns values to the entries of A and B. Let C = A + B, and
D=A*B.Extend your code so that it calculates the entries of C and D, and then prints
the entries of these matrices to screen.

Compile:
clang++ problem_2_6.cpp  ../../library/vector_functions.cpp -I../../library -o problem_2_6.exe

run:
.\problem_2_6.exe

*/

#include <iostream>
#include <cmath>
#include <cassert>
#include "../../Library/vector_functions.hpp"

double f(double x)
{
    return exp(x) + x*x*x -5;
}

double f_der(double x)
{
    return exp(x) + 3*x*x;
}

int main(int argc, char* argv[])
{
    double x_old = 0.0;
    double x_new = 0.0;

    for (int i=0; i<100; i++)
    {
        x_new -= f(x_old)/f_der(x_old);
        if (fabs(x_new - x_old) < 1e-15)
        {break;}
        x_old = x_new;
    }
    



    x_old = 0.0;
    x_new = 0;
   
    do
    {
        x_old = x_new;
        x_new = x_old - f(x_old)/f_der(x_old);
        

        std::cout << fabs(x_old - x_new) << " ";
        std::cout << x_new << "\n";
    } while (fabs(x_old-x_new) > 1e-12);

    return 0;
}