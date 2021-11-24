#include <iostream>
#include <raylib.h>
#include <assert.h>
#include "Game.hpp"

using namespace std;

Game::Game(int width, int height, string title)
{
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
  DrawText("Tetris", 190, 200, 20, (Color){ 0, 0, 0, 255 } );
}
