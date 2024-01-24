#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int row = 0;
	int column = 0;
	int choice = 0;
	int scoreChoice = 0;
	int empty = 0;
	string red = "\x1b[91m";
	string white = "\x1b[0m";
	int arrUserTime = 0;
	srand(time(0));
	cout << "Введите размер строки двумерного массива: ";
	cin >> row;
	cout << "Введите размер столбца двумерного массива: ";
	cin >> column;
	int** arrUser = new int* [row];
	int numberrandom = 0;
	for (int i = 0; i < row; i++) {
		arrUser[i] = new int[column];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			numberrandom = rand() % 49 + 1;
			arrUser[i][j] = numberrandom;
		}
	}
	/*for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
		{
			if (j % column == 0) {
				cout << endl;
			}
			cout << arrUser[i][j];
			cout << "\t";
		}*/
	
	/*for (int i = 0; i < 7; i++) {
		cout << "Инициализация | ячейка " << i << ": ";
		cin >> arrUser[i];
	}
	while (scoreChoice != 1) {
		if (scoreChoice == 1) {
			scoreChoice--;
		}
		system("cls");
		cout << "Настройки массива:\n\n";
		cout << "1 - Сортировка по возрастанию\n";
		cout << "2 - Сортировка по убыванию\n";
		cout << "Ввод: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			scoreChoice++;
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < 6; j++) {
					int jPlusOne = 0;
					jPlusOne = j + 1;
					if (arrUser[j] > arrUser[jPlusOne]) {
						arrUserTime = arrUser[j];
						arrUser[j] = arrUser[jPlusOne];
						arrUser[jPlusOne] = arrUserTime;
					}
				}
			}
			system("cls");
			for (int i = 0; i < 7; i++) {
				cout << "Ячейка " << i << ": " << arrUser[i] << endl;
			}
			break;
		case 2:
			scoreChoice++;
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < 6; j++) {
					int jPlusOne = 0;
					jPlusOne = j + 1;
					if (arrUser[j] < arrUser[jPlusOne]) {
						arrUserTime = arrUser[j];
						arrUser[j] = arrUser[jPlusOne];
						arrUser[jPlusOne] = arrUserTime;
					}
				}
			}
			system("cls");
			for (int i = 0; i < 7; i++) {
				cout << "Ячейка " << i << ": " << arrUser[i] << endl;
			}
			break;
		default:
			system("cls");
			cout << red << "Ошибка " << white << "при выборе пункта меню. Для выхода введите любое не пустое значение: ";
			cin >> empty;
			break;
		}
	}*/
	int _; cin >> _;
	return 0;
}