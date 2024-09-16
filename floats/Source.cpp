#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//This section tells the user to input a number for FLOATS
	float num1 = 0.2f;
	float num2 = 0.5f;
	cout << "For a <float>Tell me a Real number between 0.0 and 1.0\n";
	cout << "and I'll tell you if it's greater than 0.5" << endl;
	cout << "Enter number right here: ";
	cin >> num1;
	num1 = (num1 + 0.2);

	if (num1 < num2) {
		cout << num1 << " is less than " << num2;
	}
	else if (num2 < num1) {
		cout << num1 << " is greater than " << num2;
	}
	else {
		cout << num1 << " is equal to " << num2;
	}
	cout << endl;

	//This section tells the user to input a number for DOUBLES
	double num3 = 0.00;
	double num4 = 0.30;
	cout << "For a <double> Tell me a Real number between 0.0 and 1.0\n";
	cout << "and I'll tell you if it's greater than 0.3" << endl;
	cout << "Enter number right here: ";
	cin >> num3;
	num3 = (num3 + 0.20);

	if (num3 < num4) {
		cout << num3 << " is less than " << num4;
	}
	else if (num4 < num3) {
		cout << num3 << " is greater than " << num4;
	}
	else {
		cout << num3 << " is equal to " << num4;
	}
	cout << endl;

	return 0;
}