#pragma once
class Shape
{
private:
	int sidesCount;
	int* sides;
public:
	Shape();
	Shape(int);
	~Shape();
	void setSidesCount(int);
	void setSide(int, int);
	int getSidesCount();
	int getSide(int);
	virtual int calcPerimeter();
	virtual double calcArea();
};
