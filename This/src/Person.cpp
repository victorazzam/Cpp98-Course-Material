#include <sstream>
#include "Person.h"

string Person::str() {
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << "\tAge: ";
	ss << age;
	return ss.str();
}
