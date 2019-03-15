#include <iostream>
using namespace std;

int main() {

	bool b_value = true;
	cout << b_value << endl;

	char c_value = 69;
	cout << c_value << endl;
	cout << (int) c_value << endl;
	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t wct_value = 130;
	cout << wct_value << endl;
	cout << (char) wct_value << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}
