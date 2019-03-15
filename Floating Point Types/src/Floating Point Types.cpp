#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float f_value = 123.456789;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << setprecision(20) << fixed << f_value << endl;

	double d_value = 123.456789;
	cout << "Size of double: " << sizeof(double) << endl;
	cout << setprecision(20) << fixed << d_value << endl;

	long double ld_value = 123.456789876543210;
	cout << "Size of long double: " << sizeof(long double) << endl;
	cout << setprecision(20) << fixed << ld_value << endl;

	return 0;
}
