/*
Compile:
clang++ problem_5_3.cpp  ../../library/vector_functions.cpp -I../../library -o problem_5_3.exe
clang++ problem_5_3.cpp  -o problem_5_3.exe

run:
.\problem_5_3.exe


*/

#include <iostream>
//#include <fstream>
//#include <string>
// #include <cmath>
//#include <cassert>
# include "../../Library/vector_functions.hpp"


void swap(int* p_i, int* p_j);
void swap(int& i, int& j);


int main(int argc, char* argv[])
{
    // Initialize the two intergers
    int i = 4;
    int* p_i;
    p_i = &i;

    int j = 8;
    int* p_j;
    p_j = &j;



    // swap them using pointers
    //swap(p_i, p_j);

    // swap them using references
    swap(i, j);

    std::cout << i << ", "<< j;

    return 0;
}


void swap(int* p_i, int* p_j)
// Function for swapping two values located at p_i and p_j, using arithmetic operations. 
{
    *p_i = *p_i + *p_j;
    *p_j = *p_i - *p_j;
    *p_i = *p_i - *p_j;

}

void swap(int& i, int&j)
{
    i = i + j;
    j = i - j;
    i = i - j;
}