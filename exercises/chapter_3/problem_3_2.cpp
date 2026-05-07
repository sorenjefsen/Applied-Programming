
/*
Compile:
clang++ problem_3_2.cpp  ../../library/vector_functions.cpp -I../../library -o problem_3_2.exe

run:
.\problem_3_2.exe


*/



#include <iostream>
#include <fstream>
#include <string>
// #include <cmath>
#include <cassert>
// #include "../../Library/vector_functions.hpp"

int main(int argc, char* argv[])
{
    std::ifstream read_file("x_and_y.dat");
    if (!read_file.is_open()){
        return 1;
    }
    int number_of_rows = 0;
    while(!read_file.eof()){
        double dummy1, dummy2, dummy3, dummy4;
        read_file >> dummy1 >> dummy2;
        read_file >> dummy3 >> dummy4;
        number_of_rows++;
    }
    std::cout << "Number of rows = " << number_of_rows << "\n";

    return 0;
}
