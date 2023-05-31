#include<iostream>
#include"header.h"
using namespace std;

void displayBoard(const SudokuGrid& grid)
{
    cout << "\n";
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "\t";
        if (i % 3 == 0 && i != 0)
        {
            cout << "--------------------------------" << endl;
            cout << "\t";
        }
             
        for (int j = 0; j < SIZE; ++j)
        {
            if (j % 3 == 0 && j != 0)
                cout << " | ";

            cout << " " << grid.cells[i][j] << " ";
        }
        cout << endl;
    }
}