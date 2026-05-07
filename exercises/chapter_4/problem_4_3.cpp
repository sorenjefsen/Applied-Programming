/*
Compile:
clang++ problem_4_3.cpp  ../../library/vector_functions.cpp -I../../library -o problem_4_3.exe
clang++ problem_4_3.cpp  -o problem_4_3.exe

run:
.\problem_4_3.exe


First declare integer i and 
*/

#include <iostream>
//#include <fstream>
//#include <string>
// #include <cmath>
//#include <cassert>
# include "../../Library/vector_functions.hpp"

int main(int argc, char* argv[])
{

    for (int i = 0; i< 10000000; i++)
    {
        // Declare arrays
        double *x, *y;
        x = new double [3];
        y = new double [3];


        // Assign values
        x[0] = 3;
        x[1] = 4;
        x[2] = 5;

        y[0] = 30;
        y[1] = 40;
        y[2] = 50;

        //Perform operations
        double result;
        result = x[0] * y[0] + x[1] * y[1] + x[2] * y[2];

        // deassign arrays
        delete[] x;
        delete[] y;

    }

    std::cout << "Finished";

    
    return 0;
}