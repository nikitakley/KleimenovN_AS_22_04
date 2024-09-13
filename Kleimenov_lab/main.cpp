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
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Group_Dishes grDish;

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
			grDish.addDish();
			break;
		}
		case 2:
		{
			cout << "\n[2] Вывод всех блюд..." << endl;
			cout << grDish;
			break;
		}
		case 3:
		{
			string fileRead;
			ifstream fin;
			cout << "\nВведите название файла [без домена]:" << endl;
			cin >> fileRead;
			fin.open(fileRead + ".txt");
			grDish.readDishes(fin);
			cout << "\nДанные успешно загружены!" << endl;
			fin.close();
			break;
		}
		case 5:
		{
			cout << "\n[5] Очищение списка блюд..." << endl;
			grDish.deleteDishes();
			cout << "Список очищен.\n";
			break;
		}
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