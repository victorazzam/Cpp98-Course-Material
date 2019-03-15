#include <iostream>
using namespace std;

class Frog {
// Private/Public can be used multiple times
private: // Private attributes
	string name;
private: // Private methods
	string get_name() { return name; }
public: // Public data
	Frog(string name): name(name) {}
	void info() { cout << "My name is " << get_name() << endl; }
};

int main() {

	Frog frog("Freddy");
	frog.info();
//	cout << frog.get_name() << endl; // Won't work as get_name is private.

	return 0;
}
