/*******************************************************************************************
*
*   Tetris
*
*   Tetris in Raylib!
*
*   Copyright (c) 2021 VTX3
*
********************************************************************************************/

#include "Game.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    Game game{screenWidth, screenHeight, "Tetris"};

    while (!game.GameShouldClose())
    {
      game.Tick();
    }

    return 0;
}
