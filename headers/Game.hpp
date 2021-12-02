#pragma once
#include <string>

using namespace std;

class Game
{
  public:
    Game(int width, int height, int fps, std::string newTitle);
    Game(const Game& other) = delete;
    Game& operator=(const Game& other) = delete;
    ~Game() noexcept;

    bool GameShouldClose() const;
    void Tick();

    std::string title;

  private:
    void Update();
    void Draw();
};
