#include <iostream>
using namespace std;

int main() {

	char text[] = "hello"; // Same as {'h', 'e', 'l', 'l', 'o', '\0'}

	for (int i = 0; i < sizeof(text); i++) {
		cout << i << ": " << text[i] << endl;
		// text[5] contains the null terminator: \0
		// Null terminator determines the end of a string.
		// It has an ASCII value of zero.
	}

	// Printing the char array by looping until the null terminator.
	// Once text[k] reaches zero, we've hit the end of the string.
	int k = 0;
	while (text[k]) {
		cout << text[k] << flush;
		k++;
 	}
	cout << endl << endl;


	// Reversing a string

	int len = sizeof(text) - 1;

	char *p_start = text;
	char *p_end = text + len - 1;

	while (p_start < p_end) {

		cout << "p_start, *p_end before: " << *p_start << " " << *p_end << endl;

		// Swap start and end pointer locations
		char save = *p_start;
		*p_start = *p_end; // Point to a new location: end of string
		*p_end = save; // Point to a new location: start of string

		cout << "p_start, *p_end after:  " << *p_start << " " << *p_end << endl;

		++p_start;
		--p_end;
	}
	cout << endl << text << endl;

	return 0;
}
