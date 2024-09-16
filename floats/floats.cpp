#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int num1 = 5;
	int num2 = 10;
	if (num1 < num2) {
		cout << num1 << " is less than " << num2;
	} 
	else if (num2 < num1) {
		cout << num2 << " is less than " << num1;
	}
	else {
		cout << num1 << " is equal to " << num2;
	}
	cout << endl;

	return 0;
}