#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace graphics {

class Swarm {
public:
	static const int NUM = 5000;
	Swarm();
	virtual ~Swarm();
	void update(int elapsed);
	const Particle * const get_particles() { return m_particles; }
private:
	Particle * m_particles;
	int last_time;
};

}

#endif /* SWARM_H_ */
