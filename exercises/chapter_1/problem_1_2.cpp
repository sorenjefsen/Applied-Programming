/* Write code that asks a user to enter two integers from the keyboard and then
writes the product of these integers to the screen.

Compile:
clang++ problem_1_2.cpp -o problem_1_2.exe

*/

# include <iostream>

int main()
{
    int input_1, input_2, result;
    std::cout << "Put in first number, and click return \n";
    std::cin >> input_1;

    std::cout << "Put in second number, and click return \n";
    std::cin >> input_2;

    result = input_1 * input_2;

    std::cout << result;
    
    return 0;
}