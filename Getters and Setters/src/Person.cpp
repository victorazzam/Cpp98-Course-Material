#include "Person.h"

Person::Person() {
	name = "Blake";
}

string Person::to_string() {
	return "Person's name: " + name;
}

void Person::set_name(string new_name) {
	name = new_name;
}

string Person::get_name() {
	return name;
}
