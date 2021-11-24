#pragma once

using namespace std;

class Game
{
  public:
    Game(int width, int height, std::string newTitle);
    ~Game();

    bool GameShouldClose() const;
    void Tick();

    std::string title;

  private:
    void Update();
    void Draw();
};
