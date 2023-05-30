#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp_1251");

	cout << "проверка вывода кириллицы" << endl;
	cout << "кодировка UTF-8" << endl;

	return 0;
}