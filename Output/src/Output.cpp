#include <iostream>

using namespace std;

int main() {
	cout << "Starting program..." << flush; // same as endl except without "\n"
	cout << "This is some text." << endl; // endl adds "\n" and flushes the buffer
	cout << "Banana " << "Apple " << "Orange" << endl;
	cout << "More text!" << endl;
	return 0;
}
