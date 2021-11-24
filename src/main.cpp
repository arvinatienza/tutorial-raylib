#include <iostream>
//#include <string>
#include "Game.hpp"

using namespace std;

int main()
{

  const int screenWidth = 800;
  const int screenHeight = 600;

  Game game(screenWidth, screenHeight, "testhere");
  //Game game();

  //std::cout << std::to_string(game.t);
  //cout << game.title;
  //cout << "test";
  while (!game.GameShouldClose())
  {
    game.Tick();
  }

  return 0;
}
