#include <iostream>
using namespace std;

class Machine {
private:
	int id; // Remains private to Machine, cannot be modified by subclasses.
public:
	// Prepend a method with `virtual` to let overriding take effect.
	// Set a method to `virtual return_type method_name()=0;` to force subclasses to override it.
	Machine(): id(0) { cout << "Machine: default constructor" << endl; }
	Machine(int id): id(id) { cout << "Machine: constructor params: 'id'" << endl; }
	void info() { cout << "ID: " << id << endl; }
};

class Vehicle: public Machine {
public:
	// Specify which constructor to run for a direct superclass.
	// Uses the same syntax as when setting attributes class attributes.
	Vehicle(int id): Machine(id) { cout << "Vehicle: default constructor" << endl; }
	Vehicle() { cout << "Vehicle: default constructor" << endl; }
};

class Car: public Vehicle {
public:
	Car(): Vehicle(999) { cout << "Car: default constructor" << endl; }
};

int main() {

	Car c;
	c.info(); // Car objects have access to public attributes/methods of any superclass.

	return 0;
}
