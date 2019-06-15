#pragma once
#include <string>
#include <iostream>
using namespace std;
class QuadraForm
{
protected:
	int arr[3] = { 0,0,0 };
	int Up, Down, n; // Up, Down - interval ; n - segments
	int a, b, c; // ax^2+bx+c
	double h; // h - step
	string s;
public:
	QuadraForm();
	virtual void solveTheEquation();
	void checkError(int c);
	void getArray(string s);
	~QuadraForm();
};

