// Dimensions of a Shape
// Evan Crowley
// 01/26/2021

#include <iostream>
#include<cmath>

int main()
{
	const double PI = 3.14;
	double area, circumference, radius, diameter;
	int shapeoption, perimeter, sideA, sideB, sideC, length, width;
	std::cout << "Enter a number to calculate dimensions for respective shape (circle = 0, rectangle = 1, triangle = 2, hexagon = 3): ";
	std::cin >> shapeoption;
	
	if (shapeoption == 0)
	{

		std::cout << "Enter the diameter of the circle: ";
		std::cin >> diameter;
		
		radius = diameter / 2;
		std::cout << "The radius of the circle is: " << radius;

		area = PI * radius * radius;
		std::cout << "\nThe area of the circle is: " << area;

		circumference = 2 * PI * diameter;
		std::cout << "\nThe circumference of the circle is: " << circumference << "\n\n";

	}
	else if (shapeoption == 1)
	{

		std::cout << "Enter the length of the rectangle: ";
		std::cin >> length;

		std::cout << "Enter the width of the rectangle: ";
		std::cin >> width;

		area = length * width;
		std::cout << "The area of the rectangle is " << area << " units squared.";

		perimeter = (2 * length) + (2 * width);
		std::cout << "\nThe perimeter of the rectangle is " << perimeter << " units.\n\n";

	}
	else if (shapeoption == 2)
	{
		
		std::cout << "Enter side A of the triangle: ";
		std::cin >> sideA;
		
		std::cout << "Enter side B of the triangle: ";
		std::cin >> sideB;

		std::cout << "Enter side C of the triangle: ";
		std::cin >> sideC;

		perimeter = sideA + sideB + sideC;
		std::cout << "The perimeter of the triangle is " << perimeter << " units.";

		area = (perimeter / 2) * (perimeter / 2 - sideA) * (perimeter / 2 - sideB) * (perimeter / 2 - sideC);
		area = sqrt(area);
		std::cout << "\nThe area of the triangle is " << area << " units squared.\n\n";

	}
	else if (shapeoption == 3)
	{

		std::cout << "Enter the length of a side of the hexagon: ";
		std::cin >> sideA;

		area = ((3 * sqrt(3)) / 2) * pow(sideA, 2);
		std::cout << "The area of the Hexagon is: " << area;

		perimeter = 6 * sideA;
		std::cout << "\nThe perimeter of the Hexagon is: " << perimeter << "\n\n";

	}
	else
	{
		std::cout << "That is not a valid option.";
	}
}