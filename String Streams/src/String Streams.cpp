#include <iostream>
#include <sstream>

using namespace std;

int main() {

	string name = "Bob";
	int age = 32;

	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << "\nAge: ";
	ss << age;

	string info = ss.str();

	cout << info << endl;

	return 0;
}
