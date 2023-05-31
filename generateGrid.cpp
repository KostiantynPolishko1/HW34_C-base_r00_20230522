#include<ctime>
#include"header.h"

void generateGrid(SudokuGrid& grid)
{

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j)
        {
            grid.cells[i][j] = 0;
        }
    }

    srand(time(0));
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j)
        {
            if (rand() % 10 < 6)
            {
              grid.cells[i][j] = 1 + rand() % 9;
            }
        }
    }
}