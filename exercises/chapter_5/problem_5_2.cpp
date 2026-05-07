/*
Compile:
clang++ problem_5_2.cpp  ../../library/vector_functions.cpp -I../../library -o problem_5_2.exe
clang++ problem_5_2.cpp  -o problem_5_2.exe

run:
.\problem_5_2.exe


*/

#include <iostream>
//#include <fstream>
//#include <string>
// #include <cmath>
//#include <cassert>
# include "../../Library/vector_functions.hpp"


void changeTarget(int* p_target);


int main(int argc, char* argv[])
{
    int i = 4;
    int* p_i;
    p_i = &i;

    changeTarget(p_i);

    std::cout << i;
    return 0;
}

void changeTarget(int* p_target)
{
    *p_target = 5;
}