/*
Compile:
clang++ problem_5_3.cpp  ../../library/vector_functions.cpp -I../../library -o problem_5_3.exe
clang++ problem_5_3.cpp  -o problem_5_3.exe

run:
.\problem_5_3.exe

Here i rewrote 5.3 into functions as requested

*/

#include <iostream>
//#include <fstream>
//#include <string>
//#include <cmath>
//#include <cassert>
# include "../../Library/vector_functions.hpp"


void swap_pointer(double *a, double *b);
void swap_ref(double &a, double &b);


void swap_pointer(double *a, double *b)
// Function for swapping two values located at p_i and p_j, using arithmetic operations. 
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

}

void swap_ref(double &a, double &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}