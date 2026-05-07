/*
Compile:
clang++ problem_4_1.cpp  ../../library/vector_functions.cpp -I../../library -o problem_4_1.exe

run:
.\problem_4_1.exe


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
    // declare pointer and variable name
    int* p_j;
    int i;

    // assign variable a value, and make pointer point to it. & means "location of"
    i = 5;
    p_j = &i;

    // perform operation on whatever is located at p_j. * means "target of". 
    *p_j *= 5;

    std::cout << "what is stored at p_j: " << *p_j << "\n";

    // declare new pointer
    int* p_k;

    // assign it some random location
    p_k = new int;

    // change value of its target
    *p_k = i;

    *p_j = 0;

    std::cout << "what is stored at p_k: " << *p_k << "\n";
    std::cout << "what is stored at p_j after operations: " << *p_j;
    
    return 0;
}