#ifndef PARTICLE_H_
#define PARTICLE_H_

#include <stdlib.h>

namespace graphics {

// A struct is a class with all of its members set to public by default.
struct Particle {
	double m_speed;
	double m_direction;
	double m_x, m_y;
	Particle();
	void init();
	void update(int interval);
};

}

#endif /* PARTICLE_H_ */
