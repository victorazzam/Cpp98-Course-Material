#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace spc {

const string CAT_NAME = "Pico";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace spc */

#endif /* ANIMALS_H_ */
