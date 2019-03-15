#include <iostream>
using namespace std;

// Separate .h file
class Test {
public:
	// Static variables associate with the class, and so are shared between all objects.
	// Const variables must be defined
	static const int MAX = 99;
	Test() { id = ++count; }
	int get_id() { return id; }
	static void info() { cout << count << endl; }
private:
	int id;
	static int count;
};

// Separate .cpp file
int Test::count = 0; // Example use case: keeping track of how many objects are created.

// Tips!
// Use	::	when accessing static variables and methods.
// Use	->	when accessing pointer properties, e.g. `this` keyword.
// Use	.	in all other cases.

int main() {

	cout << Test::MAX << endl;

	Test t1;
	cout << "Object 1 id: " << t1.get_id() << endl;

	Test t2;
	cout << "Object 2 id: " << t2.get_id() << endl;

	Test::info();

	return 0;
}
