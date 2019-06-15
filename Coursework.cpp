
#include <iostream>
#include <string>
#include "Rectangle.h"
#include "Trapeze.h"
#include "Parabola.h"
using namespace std;

int main()
{
	char choice;
	string s;
	int Down, Up, n;
	cout << "Enter the equation";
	cout << endl;
	getline(cin, s);
	cout << endl;

	cout << "Borders?";
	cout << endl;

	cout << "Down= ";
	cin >> Down;
	cout << endl;

	cout << "Up= ";
	cin >> Up;
	cout << endl;

	cout << "Segments= ";
	cin >> n;
	cout << endl;

	cout << "Rectangle - 1 or Trapeze - 2?";
	cin >> choice;
	if (choice == '1') {
		Rectangle rct(s,Down,Up,n);
		rct.solveTheEquation();
	}
	if (choice == '2') {
		Trapeze trp(s, Down, Up,n);
		trp.solveTheEquation();
	}

	if (choice == '3') {
		Parabola pb(s, Down, Up, n);
		pb.solveTheEquation();
	}

}
