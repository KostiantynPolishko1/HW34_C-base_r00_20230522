#include<iostream>
#include<vector>
#include<string>
using namespace std;

const int SIZE = 9;

struct SudokuGrid
{
	int cells[SIZE][SIZE];
};

#ifndef HEADER_H
#define HEADER_H

void generateGrid(SudokuGrid& grid);
void displayBoard(const SudokuGrid& grid);

#endif