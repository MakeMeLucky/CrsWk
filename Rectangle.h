#pragma once
#include "QuadraForm.h"
#include <string>
class Rectangle :
	public QuadraForm
{
public:
	Rectangle();
	Rectangle(string s, int Down, int Up, int n);
	void solveTheEquation();
	~Rectangle();
};

