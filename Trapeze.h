#pragma once
#include "QuadraForm.h"
#include <string>
class Trapeze :
	public QuadraForm
{
public:
	Trapeze();
	Trapeze(string s,int Down,int Up,int n);
	void solveTheEquation();
	~Trapeze();
};

