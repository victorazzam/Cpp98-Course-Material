#include <iostream>
using namespace std;

int main() {

	cout << "Array type: int" << endl;
	int values[3]; // Syntax: type name [size]
	values[0] = 12;
	values[1] = 97;
	values[2] = 30;
	cout << values[0] << " " << values[1] << " " << values[2] << endl;
	cout << endl; // Print empty line

	cout << "Array type: double" << endl;
	double numbers[4] = {6.1, 2.7, 8.4, 5.9}; // Specifying size is not necessary here.
	for (int i = 0; i < 4; i++) {
		cout << numbers[i] << endl;
	}

	cout << endl << "Arrays with zeros" << endl;
	int arr[5] = { }; // Makes all elements 0
	for (int i = 0; i < 5; i++) {
		cout << "Element at index " << i << ": " << arr[i] << endl;
	}

	cout << endl << "Array type: string" << endl;
	string text[] = {"apple", "banana", "coconut"};
	for (int i = 0; i < 3; i++) {
		cout << "Element at index " << i << ": " << text[i] << endl;
	}


	  /////////////////////////////
	 //	Multi-dimentional array //
	/////////////////////////////

	cout << endl << "2D array of animals" << endl;
	string animals[2][3] = {
			{"fox", "dog", "cat"},
			{"lions", "tigers", "bears"}
	};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << animals[i][j] << endl;
		}
	}

	return 0;
}
