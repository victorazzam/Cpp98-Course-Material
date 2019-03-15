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

int main() {

	Animal *p_animal = new Animal[5];
	string names[] = {"Anothony", "Brian", "Chris", "Douglas", "Edgar"};
	for (int i = 0; i < 5; i++) {
		p_animal[i].set_name(names[i]);
		p_animal[i].speak();
	}
	delete [] p_animal;

	char *p_mem = new char[1000];
	delete [] p_mem;

	return 0;
}
