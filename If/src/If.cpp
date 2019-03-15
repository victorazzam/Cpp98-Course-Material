#include <iostream>
using namespace std;

int main() {

	string password = "hunter2";

	cout << "Password: " << flush;
	string input;
	cin >> input;

	if (input == password) {
		cout << "Congratulations!" << endl;
	}
	else {
		cout << "Incorrect!" << endl;
	}

//	Also works with ternary statements:
//	cout << ((input == password) ? "You're in!" : "Wrong password!");

	return 0;
}
