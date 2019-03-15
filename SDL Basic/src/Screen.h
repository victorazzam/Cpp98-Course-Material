#ifndef SCREEN_H_
#define SCREEN_H_

#include <iostream>
#include <SDL.h>

using namespace std;

namespace graphics {

class Screen {
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;
public:
	Screen();
	bool init();
	void box_blur();
	void update();
	void set_pixel(int x, int y, Uint8 r, Uint8 g, Uint8 b);
	bool process_events();
	void close();
private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer1;
	Uint32 *m_buffer2;
};

}

#endif /* SCREEN_H_ */
