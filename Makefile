default:
	clang++ -std=c++11 -I./headers -I../raylib/src -L. -L../raylib/src ../raylib/src/libraylib.a src/Game.cpp src/main.cpp  -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreAudio -framework CoreVideo -o ./build/game
linux:
	g++ -I./headers -I./lib -I/opt/raylib/src -L. -L./src -L./lib -L/opt/raylib -L/opt/raylib/src -lraylib src/Game.cpp src/main.cpp -o ./build/game
