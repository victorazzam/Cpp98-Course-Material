#include "Person.h"

int main() {

	Person person1("Bob", 32);
	cout << person1.str() << endl;

	Person person2("Fred", 26);
	cout << person2.str() << endl;

	Person person3;
	cout << person3.str() << endl;

	return 0;
}
