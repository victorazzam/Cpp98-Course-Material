#include "Screen.h"
#include "Swarm.h" // Includes Particle.h and stdlib.h

using namespace std;
using namespace graphics;

int main() {

	srand(time(NULL));

	Screen screen;

	if (!screen.init()) {
		cout << "Error initialising SDL!" << endl;
	}

	Swarm swarm;
	const int WIDTH = Screen::SCREEN_WIDTH / 2;
	const int HEIGHT = Screen::SCREEN_HEIGHT / 2;

	while (true) {
		// Trigonometric wizardry
		int elapsed = SDL_GetTicks();
		unsigned char red = (unsigned char) ((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char green = (unsigned char) ((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char blue = (unsigned char) ((1 + sin(elapsed * 0.0003)) * 128);

		swarm.update(elapsed);

		// Draw swarm
		const Particle * const particles = swarm.get_particles();
		for (int i = 0; i < Swarm::NUM; i++) {
			Particle particle = particles[i];
			int x = (particle.m_x + 1) * WIDTH;
			int y = particle.m_y * WIDTH + HEIGHT;
			screen.set_pixel(x, y, red, green, blue);
		}

		screen.box_blur();

/*
		// Draw particles
		for (int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
			for (int x = 0; x < Screen::SCREEN_WIDTH; x++) {
				screen.set_pixel(x, y, red, green, blue);
			}
		}
*/

		screen.update();

		// Check for events
		if (!screen.process_events()) {
			screen.close();
			break;
		}
	}

	return 0;
}
