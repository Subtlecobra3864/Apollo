#include <stdio.h>

#include "util.h"
#include "gfx/gfx.h"
#include "gfx/window.h"

int main(int argc, char *argv[]){
	printf("Hello, World!\n");
	window_create();
	window_loop();
	return 0; // Exit success
}
