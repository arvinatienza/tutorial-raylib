default:
	clang++ -I./headers -I../raylib/src -L. -L../raylib/src ../raylib/src/libraylib.a src/Game.cpp src/main.cpp  -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreAudio -framework CoreVideo -o ./build/game
