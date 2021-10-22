default:
	cc src/main.cpp -std=c++11 -framework IOKit -framework Cocoa -framework OpenGL `pkg-config --libs --cflags raylib` -o build/tut_raylib
