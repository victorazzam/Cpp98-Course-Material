#include <iostream>
using namespace std;

void menu();
int process();
void select(int _);

int main() {

	menu();
	int selection = process();
	select(selection);

	return 0;
}

void menu() {
	cout << "1. Search" << endl;
	cout << "2. View" << endl;
	cout << "3. Quit" << endl;
}

int process() {
	cout << "Select an option: " << flush;
	int choice;
	cin >> choice;
	return choice;
}

void select(int option) {
	switch (option) {
	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Viewing..." << endl;
		break;
	case 3:
		cout << "Quitting..." << endl;
		break;
	default:
		cout << "Choose from the given options!" << endl;
	}
}
