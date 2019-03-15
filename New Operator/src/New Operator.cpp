#include <iostream>
using namespace std;

class Animal {
private:
	string name;
public:
	Animal() {
		cout << "Animal created." << endl;
	}
	Animal(const Animal& other) {
		cout << "Animal created by copying" << endl;
	}
	~Animal() {
		cout << "Destroyed." << endl;
	}
	void set_name(string name) {
		this->name = name;
	}
	void speak() const {
		cout << "Hi, my name is " + name << endl;
	}
};

Animal *create_animal() {
	Animal *p_animal = new Animal;
	p_animal->set_name("Bertie");
	return p_animal;
}

int main() {

	// IMPORTANT
	// When using the `new` keyword, memory is explicitly allocated for a given object.
	// In this case, the destructor will not automatically be called by the program.
	// To prevent memory leakage from using unnecessary RAM space, the object must be destroyed.
	// This must be done explicitly, using the `delete` keyword.

	Animal *cat = new Animal();
	cat->set_name("Freddy");
	cat->speak();
	delete cat; // Calls destructor explicitly.

	cout << "Size of pointer: " << sizeof(cat) << endl << endl;

	Animal *frog = create_animal();
	frog->speak();
	delete frog;

	return 0;
}
