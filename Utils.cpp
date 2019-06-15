#include "Utils.h"
#include <limits>



Utils::Utils()
{
}

void Utils::askTheEquation()
{
	char choice;

	int Down, Up, n=0;
	cout << "Enter the equation ax^2+bx+c, the other degrees will be ignored";
	cout << endl;
	string s = "";
	getline(cin, s);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

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
		Rectangle rct(s, Down, Up, n);
		rct.solveTheEquation();
	}
	if (choice == '2') {
		Trapeze trp(s, Down, Up, n);
		trp.solveTheEquation();
	}

	if (choice == '3') {
		Parabola pb(s, Down, Up, n);
		pb.solveTheEquation();
	}

}


Utils::~Utils()
{
}
