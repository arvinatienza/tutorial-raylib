#include "../headers/Game.h"
#include <raylib.h>
#include <assert.h>
#include <string>

using namespace std;

Game::Game(int width, int height, std::string title)
{
  assert(!IsWindowReady());
  InitWindow(width, height, title.c_str());
  SetTargetFPS(60);
}

Game::~Game() noexcept
{
  //assert(IsWindowReady());
  CloseWindow();
}

bool Game::GameShouldClose() const
{
  return WindowShouldClose();
}

void Game::Tick()
{
  //BeginDrawing();
  //Update();
  //Draw();
  //EndDrawing();
}

void Game::Update()
{

}

void Game::Draw()
{
  //ClearBackground(RAYWHITE);
  //DrawText("Tetris", 190, 200, 20, LIME);
}

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
