#include "Parabola.h"



Parabola::Parabola()
{
}

Parabola::Parabola(string s, int Down, int Up, int n)
{
	this->s = s;
	this->Down = Down;
	this->Up = Up;
	this->n = n;
}

void Parabola::solveTheEquation()
{
	getArray(s);

	getArray(s);
	h = Up - Down;
	n = 2 * n;
	h = h / n;
	cout << "h= " << h;
	cout << endl;
	double sum = 0;
	double sum2 = 0;
	double x = Down;
	double f, xi = 0;

	for (int i = 1; i < n; i++) {
		x = x + h;
		if ((i%2)!=0) {
			f = 4*(a * x * x + b * x + c);
			sum = sum + f;
			f = 0;
		}

		else {
			f= 2 * (a * x * x + b * x + c);
			sum = sum + f;
			f = 0;
		}
	}
	f = a * Down * Down + b * Down + c + a * Up * Up + b * Up + c;
	sum = h / 3 * (sum + f);
	cout << sum;
}


Parabola::~Parabola()
{
}
