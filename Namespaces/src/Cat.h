#ifndef CAT_H_
#define CAT_H_

#include <iostream>
using namespace std;

namespace cats {

const string CAT_NAME = "Leo";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

}

#endif /* CAT_H_ */
