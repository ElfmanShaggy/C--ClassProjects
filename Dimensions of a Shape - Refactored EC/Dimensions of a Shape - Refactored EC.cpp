// Dimensions of a Shape - Refactored EC
// 3/4/2021
// Evan Crowley
#include <iostream>
#include <stdlib.h> 
#include <stdio.h>
using namespace std;

const double PI = 3.14;
double area, circumference, radius, diameter;
int perimeter, sideA, sideB, sideC, length, width, intial;

void circle(double diameter)
{
		cout << "Enter the diameter of the circle: ";
		cin >> diameter;

		radius = diameter / 2;
		cout << "The radius of the circle is: " << radius;

		area = PI * (radius * radius);
		cout << "\nThe area of the circle is: " << area;

		circumference = 2 * PI * diameter;
		cout << "\nThe circumference of the circle is: " << circumference << "\n\n";


}

void rectangle(int length, int width)
{
	cout << "Enter the length of the rectangle: ";
	cin >> length;

	cout << "Enter the width of the rectangle: ";
	cin >> width;

	area = length * width;
	cout << "The area of the rectangle is " << area << " units squared.";

	perimeter = (2 * length) + (2 * width);
	cout << "\nThe perimeter of the rectangle is " << perimeter << " units.\n\n";

}

void triangle(int sideA, int sideB, int sideC)
{
	cout << "Enter side A of the triangle: ";
	cin >> sideA;

	cout << "Enter side B of the triangle: ";
	cin >> sideB;

	cout << "Enter side C of the triangle: ";
	cin >> sideC;

	if (sideA + sideB <= sideC)
		cout << "This triangle cannot exist because, side C is either equal to or bigger than the other two sides combined.\n\n";

	else
	{

		perimeter = sideA + sideB + sideC;
		cout << "The perimeter of the triangle is " << perimeter << " units.";

		area = (perimeter / 2) * (perimeter / 2 - sideA) * (perimeter / 2 - sideB) * (perimeter / 2 - sideC);
		area = sqrt(area);
		cout << "\nThe area of the triangle is " << area << " units squared.\n\n";
	}
}

int main()
{
	

	while (intial != 3)
	{
		cout << "Enter a shape to calculate dimensions (rectangle = 0, circle = 1, triangle = 2, exit = 3): ";
		cin >> intial;
		if (cin.fail())
		{
			cout << "That is not a valid option.";
		}
		else
		{

			if (intial == 0)
			{

				rectangle(length, width);

			}
			else if (intial == 1)
			{

				circle(diameter);


			}
			else if (intial == 2)
			{

				triangle(sideA, sideB, sideC);

			}
			else if (intial == 3)
			{
				exit;
			}
			else
			{
				cout << "That is not a valid option.";
			}
		}
	}
		
}