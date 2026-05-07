/*
Compile:
clang++ problem_5_1.cpp  ../../library/vector_functions.cpp -I../../library -o problem_5_1.exe
clang++ problem_5_1.cpp  -o problem_5_1.exe

run:
.\problem_5_1.exe


*/

#include <iostream>
//#include <fstream>
//#include <string>
// #include <cmath>
//#include <cassert>
# include "../../Library/vector_functions.hpp"


void printTarget(int* p_target);


int main(int argc, char* argv[])
{
    int i = 4;
    int* p_i;
    p_i = &i;

    printTarget(p_i);

    return 0;
}

void printTarget(int* p_target)
{
    std::cout << *p_target;
}