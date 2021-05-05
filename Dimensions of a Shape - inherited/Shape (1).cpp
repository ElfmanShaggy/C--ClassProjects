#include "Shape.h"
#include <iostream>
using namespace std;

const double PI = 3.14;

Shape::Shape() {
	setSidesCount(5);
}

Shape::Shape(int sides)
{
	setSidesCount(sides);
}

Shape::~Shape()
{
	delete[] sides;
	sides = nullptr;
}

void Shape::setSidesCount(int c)
{
	sidesCount = c;
	delete[] sides;
	sides = new int[sidesCount];

	for (int i = 0; i < sidesCount; i++)
	{
		sides[i] = sidesCount;
	}
}

void Shape::setSide(int index, int length)
{
	sides[index] = length;
}

int Shape::getSidesCount()
{
	return sidesCount;
}

int Shape::getSide(int index)
{
	return sides[index];
}

int Shape::calcPerimeter()
{
	int perim = 0;
	for (int i = 0; i < sidesCount; i++)
	{
		perim += sides[i];
	}
	return perim;
}

double Shape::calcArea()
{
	double a = static_cast<double>(sidesCount);
	double n = static_cast<double>(sidesCount);
	return n * pow(a, 2.0) * (1.0 / tan(PI / a)) / 4.0;
}