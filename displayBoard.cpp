#include<iostream>
#include"header.h"
using namespace std;

void print()
{
    cout << " столбец -> ";
    for (int i = 0; i < SIZE; ++i)
    {
        if (i % 3 == 0 && i != 0)
            cout << " | ";
        cout << " " << i + 1 << " ";
    }
    cout << endl << "\t     " << "-------------------------------" << endl;
}

void print(int& i)
{
    cout << "\t";
    if (i % 3 == 0 && i != 0)
    {
        cout << "     " << "-------------------------------" << endl;
        cout << "\t";
    }
}

void displayBoard(const SudokuGrid& grid)
{
    cout << "\n\t\tИгра \"СУДОКУ!\"\n\n";

    for (int i = 0; i < SIZE; ++i)
    {
        if(!i)
            print();
        
        print(i);

        cout << i + 1 << " | ";

        for (int j = 0; j < SIZE; ++j)
        {
            if (j % 3 == 0 && j != 0)
                cout << " | ";

            cout << " " << grid.cells[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\tряд\n";
}