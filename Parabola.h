#pragma once
#include "QuadraForm.h"
class Parabola :
	public QuadraForm
{
public:
	Parabola();
	Parabola(string s, int Down, int Up, int n);
	void solveTheEquation();
	~Parabola();
};

