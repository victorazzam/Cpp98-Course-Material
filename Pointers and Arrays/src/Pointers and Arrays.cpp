#include <iostream>
using namespace std;

int main() {

	// SUMMARY
	// Arrays know all the blocks of data they point to.
	// Pointers only know about the 1st block.

	// Dereference a pointer: *mypointer
	// Dereferencing pointers converts them to normal variables.

	// Pointers represent WHERE a block of data is stored.
	// Variables represent WHAT is stored.

	string texts[] = {"one", "two", "three"};

	string *pointer = texts; // int address of first value in array

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << pointer[i] << " " << flush;
	}

	cout << endl;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pointer++) {
		cout << *pointer << " " << flush;
		// pointer++ increments the pointer to target the next array value
	}
	cout << endl;

	string *p_element = &texts[0]; // or just `texts`
	string *p_end = &texts[2];

	while (true) {
		cout << *p_element << " " << flush;
		if (p_element == p_end) break;
		p_element++;
	}

	return 0;
}
