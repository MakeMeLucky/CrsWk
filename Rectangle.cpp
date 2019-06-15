#include "Rectangle.h"



Rectangle::Rectangle()
{
}

Rectangle::Rectangle(string s, int Down, int Up, int n)
{
	this->s = s;
	this->Down = Down;
	this->Up = Up;
	this->n = n;
}

void Rectangle::solveTheEquation()
{
	getArray(s);
	h = Up - Down;
	h = h / n;
	double sum = 0;
	double x = Down;
	double f, xi = 0;

	for (int i = 0; i < n; i++) {
		xi = x + h / 2;
		f = a * xi * xi + b * xi + c;
		sum = sum + f;
		x = x + 0.5;
		f = 0;
	}
	sum = h * sum;
	cout << sum;
}



Rectangle::~Rectangle()
{
}
