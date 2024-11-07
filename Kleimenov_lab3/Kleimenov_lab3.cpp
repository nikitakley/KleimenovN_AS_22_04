// Kleimenov_lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include "pch.h"
#include "Utilities.h"
#include "Kleimenov_Dish.h"
#include "Kleimenov_Group.h"

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Kleimenov_GrDishes grDish;

	while (true) {
		cout << endl << "Команды:" << endl;
		cout << "1) Добавить блюдо" << endl;
		cout << "2) Добавить особое блюдо" << endl;
		cout << "3) Вывести все блюда" << endl;
		cout << "4) Считать список из файла" << endl;
		cout << "5) Записать список в файл" << endl;
		cout << "6) Очистить список" << endl;
		cout << "0) Выход" << endl;
		cout << "\nПожалуйста, введите номер команды: ";
		switch (GetCorrectData(0, 6))
		{
		case 1:
		{
			cout << "\n[1] Добавление нового блюда..." << endl;
			grDish.addDish();
			break;
		}
		case 2:
		{
			cout << "\n[2] Добавление особого блюда..." << endl;
			grDish.addSpecialDish();
			break;
		}
		case 3:
		{
			cout << "\n[3] Вывод всех блюд..." << endl;
			cout << grDish;
			break;
		}
		case 4:
		{
			cout << "\n[4] Чтение данных из файла..." << endl;
			string fileRead;
			cout << "\nВведите название файла, из которого нужно загрузить данные [без домена]:" << endl;
			getline(cin, fileRead);
			fileRead += ".dat";

			ifstream ifs(fileRead, std::ios::binary); // Открываем файл для чтения
			if (ifs.is_open()) {
				boost::archive::text_iarchive ia(ifs); // Создаем архив для десериализации
				ia >> grDish.vectorGet();  // Загружаем данные в текущий объект grDish
				cout << "\nДанные успешно загружены!" << endl;
			}
			else {
				cout << "\nТакого файла не существует." << endl;
			}
			break;
		}
		case 5:
		{
			cout << "[5] Сохранение данных в файл..." << endl;
			string fileWrite;
			cout << "\nВведите название файла, в который нужно сохранить данные [без домена]:" << endl;
			getline(cin, fileWrite);
			fileWrite += ".dat";
			
			ofstream ofs(fileWrite, std::ios::binary); // Открываем файл для записи
			if (ofs.is_open()) {
				boost::archive::text_oarchive oa(ofs); // Создаем архив для сериализации
				oa << grDish.vectorGet();  // Сохраняем данные из текущего объекта grDish
				cout << "\nДанные успешно сохранены!" << endl;
			}
			else {
				cout << "\nОшибка при открытии файла для записи." << endl;
			}
			break;
		}
		case 6:
		{
			cout << "\n[6] Очищение списка блюд..." << endl;
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