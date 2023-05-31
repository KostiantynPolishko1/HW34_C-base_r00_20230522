#include"header.h"

bool isValidValue(const SudokuGrid& grid, int row, int col, int value)
{
    for (int i = 0; i < SIZE; ++i)
    {
        if (grid.cells[row][i] == value || grid.cells[i][col] == value)
            return false;
    }

    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;

    for (int i = startRow; i < startRow + 3; ++i)
    {
        for (int j = startCol; j < startCol + 3; ++j)
            if (grid.cells[i][j] == value)
                return false;
    }

    return true;
}