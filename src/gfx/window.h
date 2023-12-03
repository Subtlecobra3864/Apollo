#ifndef WINDOW_H
#define WINDOW_H

#include "gfx.h"
#include "../util.h"

struct Window {
	GLFWwindow* handle;
	u16 height;
	u16 width;

	// timings
	u64 fps; // framerate
};

extern struct Window window;

void window_create();
void window_loop();


#endif
