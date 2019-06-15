#include "Trapeze.h"



Trapeze::Trapeze()
{
}

Trapeze::Trapeze(string s, int Down, int Up,int n)
{
	this->s = s;
	this->Down = Down;
	this->Up = Up;
	this->n = n;
}

void Trapeze::solveTheEquation()
{
	getArray(s);
	h = Up - Down;
	h = h / n;
	double sum = 0;
	double sumEtE = 0;
	double x = Down;
	double f = 0;

	for (int i = 1; i < n; i++) {
		x = x + h;
		f = a * x * x + b * x + c;
		sum = sum + f;
		f = 0;
	}

	f = (a * Down * Down + b * Down + c + a * Up * Up + b * Up + c)/2;
	sum = h*(sum+f);
	cout << sum;
}



Trapeze::~Trapeze()
{
}
