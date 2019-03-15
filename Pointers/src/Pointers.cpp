#include <iostream>
using namespace std;

void manipulate(double *p_value) {
	cout << "2. Manipulate() double value: " << *p_value << endl;
	*p_value = 10.0;
	cout << "3. Manipulate() double value: " << *p_value << endl;
}

//	Pointer syntax:			type *name = value;
//	Pointer target value:	*name
//	Pointer from variable:	&name // memory address of variable
//	Change target value:	*name = new value;

int main() {

	int value = 8;
	int *pointer = &value;

	cout << "Int value: " << value << endl;
	cout << "Pointer to value: " << pointer << endl;
	cout << "Int value via pointer: " << *pointer << endl << endl;

	double d_value = 123.4;
	cout << "1. Double value: " << d_value << endl;
	manipulate(&d_value);
	cout << "4. Double value: " << d_value << endl;

	return 0;
}
