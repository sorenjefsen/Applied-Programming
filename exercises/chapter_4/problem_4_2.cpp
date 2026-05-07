/*
Compile:
clang++ problem_4_2.cpp  ../../library/vector_functions.cpp -I../../library -o problem_4_2.exe
clang++ problem_4_2.cpp  -o problem_4_2.exe

run:
.\problem_4_2.exe


First declare integer i and 
*/

#include <iostream>
#include <fstream>
#include <string>
// #include <cmath>
#include <cassert>
// #include "../../Library/vector_functions.hpp"

int main(int argc, char* argv[])
{
    // declare variables
    int i;
    int j;

    i = 5;
    j = 8;

    // declare pointers and their target location
    int* p_i;
    int* p_j;
    p_i = &i;
    p_j = &j;
    std::cout << "After Initialization: \n";
    std::cout << "i = " << i << "\n";
    std::cout << "p_i points to : " << *p_i << "\n";
    std::cout << "j = " << j << "\n";
    std::cout << "p_j points to : " << *p_j << "\n";

    // switch around using arithmetic
    *p_i = *p_i + *p_j;
    *p_j = *p_i - *p_j;
    *p_i = *p_i - *p_j;
    
    std::cout << "After operations: \n";
    std::cout << "i = " << i << "\n";
    std::cout << "p_i points to : " << *p_i << "\n";
    std::cout << "j = " << j << "\n";
    std::cout << "p_j points to : " << *p_j << "\n";
    

    
    return 0;
}