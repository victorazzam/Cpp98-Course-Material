#include <iostream>
using namespace std;

class Animal {
private:
	string name;
public:
	void set_name(string name) { this->name = name; }
	// Writing `const` after a method prototype prevents setting instance variables within the method.
	void speak() const { cout << "Hi, my name is " << name << endl << endl; }
};

int main() {

	const double pi = 3.141592;
	cout << pi << endl;

	Animal animal;
	animal.set_name("Freddy");
	animal.speak();

	////////////////////////////

	int value = 8;
	cout << "Value declared:  " << value << endl;

	int *pointer = &value; // Pointer to value
	cout << "Pointer before:  " << *pointer << endl;
	cout << "Pointer address: " << pointer << endl;

	int number = 11;
	cout << "Number declared: " << number << endl;

	// Changes pointer location
	pointer = &number;	// Error with: int *const pointer = &value;

	// Changes value of current pointer location
	*pointer = 12;		// Error with: const int *pointer = &value;

	// 1st error: const applied to pointer, prevents pointing elsewhere
	// 2nd error: const applied to pointer type, prevents changes to the pointer's target value

	cout << "Number:          " << number << endl;
	cout << "Value:           " << value << endl;
	cout << "Pointer after:   " << *pointer << endl;
	cout << "Pointer address: " << pointer << endl;

	return 0;
}
