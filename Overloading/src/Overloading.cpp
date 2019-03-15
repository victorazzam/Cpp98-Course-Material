#include "Person.h"

int main() {

	Person person1;
	cout << person1.str() << endl;

	Person person2("Bob");
	cout << endl << person2.str() << endl;

	Person person3("Sue", 35);
	cout << endl << person3.str() << endl;

	return 0;
}
