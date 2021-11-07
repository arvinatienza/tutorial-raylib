#include "../headers/Game.h"
#include <raylib.h>
#include <assert.h>
#include <string>

Game::Game(int width, int height, std::string title);
{
  assert(!IsWindowReady());
  InitWindow(width, height, title.c_str());
  SetTargetFPS(60);
}

Game::~Game() noexcept
{
  assert(IsWindowReady());
  CloseWindow();
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
  DrawText("Tetris", 190, 200, 20, LIME);
}
