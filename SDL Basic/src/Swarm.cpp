#include "Swarm.h"

namespace graphics {

Swarm::Swarm(): last_time(0) {
	m_particles = new Particle[NUM];
}

Swarm::~Swarm() {
	delete[] m_particles;
}

void Swarm::update(int elapsed) {
	int interval = elapsed - last_time;
	for (int i = 0; i < Swarm::NUM; i++) {
		m_particles[i].update(interval);
	}
	last_time = elapsed;
}

}
