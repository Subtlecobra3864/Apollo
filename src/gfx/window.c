/************************************************************************
 *
 *
 *	FILE: window.c
 *	DESCRIPTION: Window handling
 *	DATE: 2023/12/03
 *
 *
 *
 ***********************************************************************/
#include "gfx.h"
#include "window.h"

#include <GLFW/glfw3.h>
#include <stdio.h>
#include <stdlib.h>

struct Window window; // global window

// create a window
void window_create(){
	if (!glfwInit()){
		fprintf(stderr, "%s", "Failed to init glfw\n");
		exit(1); // terminate program
	}

	glfwWindowHint(GLFW_SAMPLES, 0); // No antialising because fps reduced
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	window.width = 640;
	window.height = 480;
	window.handle = glfwCreateWindow(window.width, window.height, "Apollo", NULL, NULL);
	if (window.handle == NULL){
		fprintf(stderr, "%s", "Failed to init glfw window\n");
		glfwTerminate(); // terminate glfw
		exit(1); // terminate program
	}

	glfwMakeContextCurrent(window.handle);
}
