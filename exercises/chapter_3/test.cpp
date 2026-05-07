# include <iostream>
# include <vector>
# include "../../Library/vector_functions.hpp"

/*
clang++ test.cpp  ../../library/vector_functions.cpp -I../../library -o test.exe

.\test.exe
*/


double sizer(const std::vector<double>a){
    int n = a.size();
    return n;
}

int main()
{
    double A[3][3] = {{1,2}, {3, 4}, {5, 6}};
    print_matrix(A, 3, 2);

    return 0;
}