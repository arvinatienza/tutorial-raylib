#pragma once
#include <string>

class Game
{
  public:
    Game(int width, int height, std::string title);
    ~Game();

    bool GameShouldClose() const;
    void Tick();

  private:
    void Draw();
    void Update();

};
