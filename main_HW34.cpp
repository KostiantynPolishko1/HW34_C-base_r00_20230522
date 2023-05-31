#include<iostream>
#include<vector>
#include"header.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	SudokuGrid grid;
	generateGrid(grid);

	return 0;
}