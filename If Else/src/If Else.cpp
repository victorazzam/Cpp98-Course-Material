#include <iostream>
using namespace std;

int main() {

	cout << "#1 Add entry" << endl;
	cout << "#2 Delete entry" << endl;
	cout << "#3 View database" << endl;
	cout << "#4 Search database" << endl;
	cout << "#5 Quit" << endl;

	cout << "Select an item: " << flush;

	int choice;
	cin >> choice;

	if (choice == 1) {
		cout << "Added an entry." << endl;
	}
	else if (choice == 2) {
		cout << "Deleting an entry." << endl;
	}
	else if (choice == 3) {
		cout << "Viewing the database." << endl;
	}
	else if (choice == 4) {
		cout << "Searching the database." << endl;
	}
	else if (choice == 5) {
		cout << "Quitting." << endl;
	}
	else {
		cout << "Invalid option!" << endl;
	}

	return 0;
}
