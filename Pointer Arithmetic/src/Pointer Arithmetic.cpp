#include <iostream>
using namespace std;

int main() {

	const int NSTRINGS = 5; // Const variables cannot be changed
	string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};
	cout << "&texts: " << &texts << endl; // Location of array in memory, i.e. where it starts
	cout << "texts:  " << texts << endl; // Represented as its location in memory
	// Hence `&array` and `array` are the same thing.

	cout << endl;

	string *p_texts = texts; // Pointer to (first element of) array
	p_texts += 3; // Increase pointer position by 3
	cout << "Increased pointer by 3: " << *p_texts << endl;
	p_texts -= 2; // Decrease pointer position by 2
	cout << "Decreased pointer by 2: " << *p_texts << endl << endl;

	string *p_end = &texts[NSTRINGS]; // Pointer to just after end of array
	p_texts = &texts[0]; // Pointer to start of array

	while (p_texts < p_end) {
		cout << *p_texts << endl;
		p_texts++;
	}

	p_texts = &texts[0]; // Pointer to start of array
	int elements = p_end - p_texts; // Subtract pointer values
	cout << endl << "Difference between pointers: " << elements << endl;

	p_texts = &texts[0]; // Pointer to start of array
	p_texts += NSTRINGS / 2; // Pointer to middle of array
	cout << "Middle of array: " << *p_texts << endl;

	return 0;
}
