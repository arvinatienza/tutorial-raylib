default:
	clang -std=c++11 -I./headers -L. -L../raylib/src ../raylib/src/libraylib.a src/main.cpp  -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreAudio -framework CoreVideo -o ./build/game -v
