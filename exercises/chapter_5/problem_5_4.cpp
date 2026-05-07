/*
Compile:
clang++ problem_5_4.cpp  ../../library/vector_functions.cpp -I../../library -o problem_5_4.exe
clang++ problem_5_4.cpp  -o problem_5_4.exe

run:
.\problem_5_4.exe


*/

#include <iostream>
//#include <fstream>
//#include <string>
#include <cmath>
//#include <cassert>
# include "../../Library/vector_functions.hpp"


double calc_mean(double a[], int length);
double calc_std(double a[], int length);


int main(int argc, char* argv[])
{

    double a[3] = {0, 2, 4};
    double mean;
    mean = calc_mean(a, 3);

    std::cout << "mean = " << mean << "\n";

    double std;
    std = calc_std(a, 3);

    std::cout << "std = " << std << "\n";
    return 0;
}


double calc_mean(double a[], int length)
{
    double sum = 0;
    for (int i = 0; i<length; i++)
    {
        sum += a[i];
    }

    return sum/length;
}
double calc_std(double a[], int length)
{
    double mean;
    mean = calc_mean(a, length);

    double std;
    std = 0;

    for (int i = 0; i<length; i++)
    {
        std += (a[i]-mean)*(a[i]-mean);
    }
    
    return sqrt( std/(length-1));
}