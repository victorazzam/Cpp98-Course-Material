#include <iostream>
#include <limits>

using namespace std;

int main() {
	cout << "Max value: " << INT_MAX << endl;
	cout << "Min value: " << INT_MIN << endl;

	long int large = 12341235412351234;
	cout << large << endl;

	short int small = 32000;
	cout << small << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;

	unsigned int positive = 1234123412;
	cout << positive << endl;

	return 0;
}
