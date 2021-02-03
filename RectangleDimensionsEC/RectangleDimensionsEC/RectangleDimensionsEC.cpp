// Dimensions of a Rectangle
// Evan Crowley
// 01/21/2021

#include <iostream>

int main()
{
    int length, width;
    
    std::cout << "Please enter the length of the rectangle: ";
    std::cin >> length;
    
    std::cout << "Please enter the width of the rectangle: ";
    std::cin >> width;
    
    int area, perimeter;
    
    area = length * width;
    perimeter = length + width;

    std::cout << "The area of the rectangle: " << area;
    std::cout << "\nThe perimiter of the rectangle is: "<< perimeter;
}

