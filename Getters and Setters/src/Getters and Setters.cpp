#include "Person.h"

int main() {

	Person person;
	cout << person.to_string();

	person.set_name("Aaron");
	cout << endl << person.get_name();

	return 0;
}
