#include <iostream>
#include <raylib.h>
#include <assert.h>
#include "Game.hpp"

using namespace std;

Game::Game(int width, int height, std::string newTitle)
{
  title = newTitle;
  InitWindow(width, height, title.c_str());
  SetTargetFPS(60);

}

Game::~Game()
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
  ClearBackground((Color){ 255, 255, 255, 255 });
  DrawText(title.c_str(), 190, 200, 20, (Color){ 0, 0, 0, 255 } );
}
