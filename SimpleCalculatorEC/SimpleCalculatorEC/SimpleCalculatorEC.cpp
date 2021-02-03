// Simple Calculator
// Evan Crowley
// 01/21/2021

#include <iostream>

int main()
{
    int int1, int2;

    std::cout << "Please enter first number: ";
    std::cin >> int1;

    std::cout << "Please enter second number: ";
    std::cin >> int2;

    int sum = int1 + int2;

    std::cout << int1 << " + " << int2 << " = " << sum;
}