#include <iostream>
using namespace std;

int main() {

	// Insertion operator: <<
	// Extraction operator: >>

	cout << "Enter your name: " << flush;
	string input;
	cin >> input;
	cout << "Hi " << input << endl;

	cout << "Enter a number: " << flush;
	int value;
	cin >> value;
	cout << "You entered: " << value << endl;

	return 0;
}
