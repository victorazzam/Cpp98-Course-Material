#include <iostream>
using namespace std;

class Animal {
private:
	string name;
public:
	Animal() { cout << "Animal created!" << endl; }
	Animal(const Animal &other): name(other.name) { cout << "Animal created by copying!" << endl; }
	void set_name(string name) { this->name = name; }
	// Writing `const` after a method prototype prevents setting instance variables within the method.
	void speak() const { cout << "Hi, my name is " << name << endl; }
};

int main() {

	Animal animal1;
	animal1.set_name("Freddy");

	Animal animal2 = animal1; // Calls the copy constructor
	animal2.speak();
	animal2.set_name("Bob");

	animal1.speak();
	animal2.speak();

	Animal animal3(animal1); // Also calls the copy constructor
	animal3.speak();

	return 0;
}
