# This is a makefile
# It lets you run commands to perform multiple actions at once
# Instead of running them individually through the terminal
# Just type 'make' followed by one of the following parameters to build
# 	- 'clean' to delete the build
# 	- 'build' to build the project
# 	- 'test' is for testing new code
# 	- 'dirs' creates the build directory
#
# NOTE: MAKE MUST BE INSTALLED ON THE SYSTEM
# TO INSTALL ON ARCH LINUX(UPDATE SYSTEM FIRST using -Syyu FLAG):
# 	sudo pacman -S make
#
# TO INSTALL DEPENDENCIES USING THIS MAKEFILE:
# make install-deps

BUILD_NAME = apollo-bin
CC = gcc
CFLAGS = -lGL -lglfw
SRC = main.c\
	  types.h\
	  util.h\
	  gfx/window.c\
	  gfx/window.h\
	  gfx/gfx.h\
	  include/glad/src/glad.c\
	  include/glad/src/glad.h\

rebuild:
	rm -rf build/*
	mkdir -p build/
	$(CC) $(SRC) $(CFLAGS) -o build/$(BUILD_NAME)

clean:
	rm -rf build/

build:
	mkdir -p build/
	$(CC) $(SRC) $(CFLAGS) -o build/$(BUILD_NAME)

install-deps:
	sudo pacman -Syyu base-devel --needed
