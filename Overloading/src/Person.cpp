#include <sstream>
#include "Person.h"

Person::Person() {
	name = "undefined";
	age = 0;
}

Person::Person(string new_name, int new_age) {
	name = new_name;
	age = new_age;
}

string Person::str() {
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << "\nAge: ";
	ss << age;
	return ss.str();
}
