#include <iostream>
#include <vector>
using namespace std;

enum Tile
{
	UNKNOWN,
	FILLED,
	EMPTY
};

void emptytiles(vector<vector<Tile>> r) { // Заповнення двовимірного вектора порожніми клітинами
	for (int i = 0; i < row, i++) // row - ширина вектора
		for (int j = 0; j < col; j++) { // col - висота вектора
			if (r[i][j]) // перевірка чи є елемент порожнім 
				continue;
			else cout << "|_|"; // заповнення порожніми клітинами або нулями
		}
} /* Питання: чи є зміст робити дві окремі функції на заповнення 
окремо стовпчиків і рядків, якщо ця функція заповняє відразу всі клітинки */

int main()
{
	int width, height;
	vector<vector<Tile>> r;
	vector<vector<int>> hintsH;
	vector<vector<int>> hintsV;

	return 0;
}
