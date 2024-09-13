#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include "Kleimenov_Dish.h"
#include "Kleimenov_Group.h"
#include "Utilities.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Dish dish0;
	vector<Dish> vectorDishes;
	/*Dishes groupDishes;*/

	int num = 0;
	while (true) {
		cout << endl << "Команды:" << endl;
		cout << "1) Добавить блюдо" << endl;
		cout << "2) Вывести все блюда" << endl;
		cout << "3) Считать список из файла" << endl;
		cout << "4) Записать список в файл" << endl;
		cout << "5) Очистить список" << endl;
		cout << "0) Выход" << endl;
		cout << "\nПожалуйста, введите номер команды: ";
		switch (GetCorrectData(0, 5))
		{
		case 1:
		{
			cout << "\n[1] Добавление нового блюда..." << endl;
			Dish dish0;
			cin >> dish0;
			vectorDishes.push_back(dish0);
			break;
		}
		case 2:
		{
			cout << "\n[2] Вывод всех блюд..." << endl;
			for (const auto& elem : vectorDishes)
				cout << elem << endl;
			break;
		}
		//case 3:
		//{
		//	cout << "\n[3] Viewing all objects: " << endl;
		//	if (Pipes.size() == 0)
		//		cout << "\nNo pipes have been added!" << endl;
		//	for (const auto& elem : Pipes)
		//		cout << elem.second;

		//	if (Stations.size() == 0)
		//		cout << "\nNo stations have been added!" << endl;
		//	for (const auto& elem : Stations)
		//		cout << elem.second;
		//	break;
		//}
		case 0:
		{
			return false;
			break;
		}
		default:
		{
			cout << endl << "Такой команды нет, попробуйте снова!" << endl;
			break;
		}
		}
	}
	return 0;
}