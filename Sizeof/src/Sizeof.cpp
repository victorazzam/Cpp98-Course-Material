#include <iostream>
using namespace std;

int main() {

	int values[] = {5, 7, 3, 9};

	cout << "Size of values: " << sizeof(values) << endl;
	cout << "Size of int: " << sizeof(int) << endl;

	cout << "Values: " << flush;
	for (int i = 0; i < sizeof(values) / sizeof(int); i++) {
		cout << values[i] << " " << flush;
	}

	// Using sizeof() to loop over a multi-dimentional array
	string animals[][3] = {
			{"alligator", "baboon", "coyote"},
			{"dinosaur", "elephant", "flamingo"}
	};
	cout << endl << "Multi-dimentional array: " << flush;
	for (int i = 0; i < sizeof(animals) / (sizeof(string) * 3); i++) {
		for (int j = 0; j < sizeof(animals[0]) / sizeof(string); j++) {
			cout << animals[i][j] << " " << flush;
		}
	}

	return 0;
}
