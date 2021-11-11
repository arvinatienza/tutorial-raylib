#pragma once
#include <string>

using namespace std;

class Game
{
  public:
    Game(int width, int height, std::string title);
    ~Game() noexcept;

    bool GameShouldClose() const;
    void Tick();

  private:
    void Draw();
    void Update();

};
