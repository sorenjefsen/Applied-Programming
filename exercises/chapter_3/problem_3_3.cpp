
/*
Compile:
clang++ problem_3_3.cpp  ../../library/vector_functions.cpp -I../../library -o problem_3_3.exe

run:
.\problem_3_3.exe


I tried to run plot the data in python_tester notebook, and it showed exp(-x)
*/



#include <iostream>
#include <fstream>
#include <string>
// #include <cmath>
#include <cassert>
// #include "../../Library/vector_functions.hpp"


// First we define the step function. Taking in the y_n, and calculating y_{n + 1}
double step(double y, double h){
    return y/(1+h);
}

int main(int argc, char* argv[])
{
    // Initialize our variables
    int N = 1000;
    double y = 1;
    double h = 1.0/N;
    double x = 0;

    // Prepare file for reading and writign
    std::ifstream read_file("xy.dat");
    std::ofstream write_output("xy.dat");

    // Main for loop
    for (int n = 0; n<N; n++){
        y = step(y, h);

        // We also update x and write x and y to the output .dat file
        x += h;
        write_output << x << "," << y << "\n";
    }

    write_output.close();

    

    return 0;
}
