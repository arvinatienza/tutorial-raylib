#include "Game.h"
#include <raylib.h>

Game::Game(int width, int height, std::string title)
{
  InitWindow(width, height, title.c_str());
  SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
}

Game::~Game() noexcept
{
  CloseWindow()

}

bool Game::GameShouldClose() const
{
  return WindowShouldClose();
}

void Game::Tick()
{
  BeginDrawing();
  Update();
  Draw();
  EndDrawing();
}

void Game::Update()
{

}

void Game::Draw()
{
  ClearBackground(RAYWHITE);
  DrawText("Congrats! You created your first window! Yayyyy", 190, 200, 20, LIME);
}
