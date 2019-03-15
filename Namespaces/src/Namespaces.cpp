#include "Animals.h"
#include "Cat.h"

using namespace cats;

int main() {

	Cat cat;
	cat.speak();

	spc::Cat cat1;
	cat1.speak();

	cats::Cat cat2;
	cat2.speak();

	cout << cats::CAT_NAME << endl;
	cout << spc::CAT_NAME << endl;
	cout << CAT_NAME << endl;

	return 0;
}
