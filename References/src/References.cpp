#include <iostream>
using namespace std;

void change(double &value) {
	value = 123.4;
}

int main() {

	int value1 = 8;
	int value2 = value1; // value2 holds a copy of the data from value1
	int &value3 = value1; // value3 holds a reference to value1 because of &
	value2 = 3;
	value3 = 10; // Changes both value3 and value1 to 10

	cout << "Value 1: " << value1 << endl;
	cout << "Value 2: " << value2 << endl;
	cout << "Value 3: " << value3 << endl;

	double value = 4.321;
	cout << endl << "Double before: " << value << endl;
	change(value);
	cout << "Double after:  " << value << endl;

	return 0;
}
