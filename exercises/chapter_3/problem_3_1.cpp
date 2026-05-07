
/*
Compile:
clang++ problem_3_1.cpp  ../../library/vector_functions.cpp -I../../library -o problem_3_1.exe

run:
.\problem_3_1.exe


3: precision is 10 digits. output is in scientific. plus sign for positive numbers

4: check for already existing file. Prompt the user if they want to replace file.
*/



#include <iostream>
#include <fstream>
#include <string>
// #include <cmath>
#include <cassert>
// #include "../../Library/vector_functions.hpp"


int main(int argc, char* argv[])
{
    double x[4] = {0.0, 1.0, 1.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};

    // Check if file is already here
    std::ifstream file("x_and_y.dat");
    if (file.good())
    {
        std::string input;
        std::cout << "File already exists, do you want to replace it? (y/n)" << "\n";
        std::cin >> input;

        if (input == "n"){
            std::cout << "Not replacing. Closing program";
            return 0;
        }
    }

    // print to file x_and_y.dat, so x is on line 0, and y is on line 1
    std::ofstream write_output("x_and_y.dat");
    assert(write_output.is_open());

    // Set precision and add + and -
    write_output.precision(10);
    write_output.setf(std::ios::showpos);
    write_output.setf(std::ios::scientific);





    // Print vector x
    for (int i = 0; i<3; i++){
    write_output << x[i] << " ";
    }
    write_output << "\n";
    write_output.flush();

    // Print vector y
    for (int i = 0; i<3; i++){
    write_output << y[i] << " ";
    }

    write_output.close();


    return 0;

}