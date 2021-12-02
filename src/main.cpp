#include "Game.hpp"

using namespace std;

int main()
{

  const int screenWidth = 800;
  const int screenHeight = 600;

  Game game(screenWidth, screenHeight, 60, "Tetris 2021");

  while (!game.GameShouldClose())
  {
    game.Tick();
  }

  return 0;
}
