#include<iostream>
#include<vector>
#include"header.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	SudokuGrid grid;

	generateGrid(grid);
	displayBoard(grid);

	return 0;
}