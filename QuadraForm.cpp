#include "QuadraForm.h"
#include "Utils.h"


QuadraForm::QuadraForm()
{
}

void QuadraForm::solveTheEquation()
{
}

void QuadraForm::checkError(int c)
{
}

void QuadraForm::getArray(string s)
{
	int i = 0;
	Utils u;
	string tmp, tmp2 = "";

	string dgr = "";

	for (auto& r : s) {

		if (r == '^') {
			dgr = dgr + r;
		}
		else if (r == 'x') {
			try {
				arr[i] = stod(tmp2);
			}
			catch (exception) {
				cout << "Error0";
				u.askTheEquation();
			}
			tmp2 = "";
			i++;
		}
		else if (r == '-') {
			if (tmp2 == "") {
				tmp2 = tmp2 + r;
			}
			else {
				try {
					arr[i] = stod(tmp2);
				}
				catch (exception) {
					cout << "Error1";
					u.askTheEquation();
				}
				tmp2 = "-";
				i++;
			}
		}
		else if (r == '+') {
			if (tmp2 != "") { // not empty
				arr[i] = stod(tmp2);
				tmp2 = "";
				i++;
			}
		}

		else {
			if (dgr.empty() == 1) {
				tmp2 = tmp2 + r;
			}
			else dgr = "";
		}

	}

	try {
		arr[i] = stoi(tmp2);
	}
	catch (exception) {
		u.askTheEquation();
	}

	a = arr[0];
	b = arr[1];
	c = arr[2];

//	cout << "arr= " << arr[0]<< " " << arr[1]<< " " << arr[2];

	string checkS = "";

/*	if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
		cout << "Error3!" << endl;
		u.askTheEquation();
	}else if (arr[2] == 0 && arr[1] == 0) {
		checkS = to_string(arr[0]) + "x^2";
	}else if (arr[1] == 0) {
		if (arr[2] > 0) {
			checkS = to_string(arr[0]) + "x^2" + "+"+ to_string(arr[2]);
		}else checkS = to_string(arr[0]) + "x^2" + to_string(arr[2]);
	}else if (arr[2] == 0) {
		if (arr[1] > 0) {
			checkS = to_string(arr[0]) + "x^2" + to_string(arr[1]) + "x" + "+" + to_string(arr[2]);
		} else checkS = to_string(arr[0]) + "x^2" + to_string(arr[1]) + "x" + to_string(arr[2]);
	}
*/
//	else {
		if (arr[1] < 0 && arr[2] < 0) {
			checkS = to_string(arr[0]) + "x^2" + to_string(arr[1]) + "x" + to_string(arr[2]);
		}
		else if (arr[1] > 0 && arr[2] < 0) {
			checkS = to_string(arr[0]) + "x^2" + "+" + to_string(arr[1]) + "x" + to_string(arr[2]);
		}
		else if (arr[2] == 0 && arr[1] == 0) {
			checkS = to_string(arr[0]) + "x^2";
		}
		else if (arr[1] < 0 && arr[2] > 0) {
			checkS = to_string(arr[0]) + "x^2" + to_string(arr[1]) + "x" + "+" + to_string(arr[2]);
		} else checkS = to_string(arr[0]) + "x^2" + "+"+ to_string(arr[1]) + "x" + "+" + to_string(arr[2]);
//	}
	if (s != checkS) {
		cout << "ErrorNoMatch" << endl;
		cout << endl;
		cout << checkS;
		u.askTheEquation();
	}

}


QuadraForm::~QuadraForm()
{
}
