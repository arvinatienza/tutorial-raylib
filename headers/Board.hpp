#pragma once
#include <raylib.h>
#include <vector>

class Board
{
  private:
    class Cell
    {
      public:
        Cell();
        void SetColor(Color c_in);
        void Remove();

      private:
        bool bExists;
        Color c;
    }

  public:
    Board(int x_in, int y_in, int width, int height, int cellsize);
    void SetCell(int x, int y, Color c);

  private:
    std::vector<Cell> cells;
    const int width;
    const int height;
    const int cellSize;
    int x;
    int y;
}
