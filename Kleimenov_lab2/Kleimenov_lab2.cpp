// Kleimenov_lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include "pch.h"
#include "framework.h"
#include "Kleimenov_lab2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// Единственный объект приложения
//CWinApp theApp;

#include <iostream>
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

		}
		case 3:
		{
			cout << "\n[2] Вывод всех блюд..." << endl;
			cout << grDish;
			break;
		}
		case 4:
		{
			//cout << "\n[3] Чтение данных из файла..." << endl;
			//string fileRead;
			//ifstream fin;
			//cout << "\nВведите название файла, из которого нужно загрузить данные [без домена]:" << endl;
			//getline(cin, fileRead);
			//fin.open(fileRead + ".txt");
			//grDish.readDishes(fin);
			//fin.close();
			//break;
		}
		case 5:
		{
			//cout << "[4] Сохранение данных в файл..." << endl;
			//string fileOut;
			//ofstream fout;
			//cout << "\nВведите название файла, в который нужно сохранить данные:" << endl;
			//getline(cin, fileOut);
			//fout.open(fileOut + ".txt");
			//grDish.saveDishes(fout);
			//fout.close();
			break;
		}
		case 6:
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

//int main()
//{
//    int nRetCode = 0;
//
//    HMODULE hModule = ::GetModuleHandle(nullptr);
//
//    if (hModule != nullptr)
//    {
//        // инициализировать MFC, а также печать и сообщения об ошибках про сбое
//        if (!AfxWinInit(hModule, nullptr, ::GetCommandLine(), 0))
//        {
//            // TODO: вставьте сюда код для приложения.
//            wprintf(L"Критическая ошибка: сбой при инициализации MFC\n");
//            nRetCode = 1;
//        }
//        else
//        {
//            // TODO: вставьте сюда код для приложения.
//        }
//    }
//    else
//    {
//        // TODO: измените код ошибки в соответствии с потребностями
//        wprintf(L"Критическая ошибка: сбой GetModuleHandle\n");
//        nRetCode = 1;
//    }
//
//    return nRetCode;
//}
