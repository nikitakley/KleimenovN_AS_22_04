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
		cout << endl << "�������:" << endl;
		cout << "1) �������� �����" << endl;
		cout << "2) ������� ��� �����" << endl;
		cout << "3) ������� ������ �� �����" << endl;
		cout << "4) �������� ������ � ����" << endl;
		cout << "5) �������� ������" << endl;
		cout << "0) �����" << endl;
		cout << "\n����������, ������� ����� �������: ";
		switch (GetCorrectData(0, 5))
		{
		case 1:
		{
			cout << "\n[1] ���������� ������ �����..." << endl;
			Dish dish0;
			cin >> dish0;
			vectorDishes.push_back(dish0);
			break;
		}
		case 2:
		{
			cout << "\n[2] ����� ���� ����..." << endl;
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
			cout << endl << "����� ������� ���, ���������� �����!" << endl;
			break;
		}
		}
	}
	return 0;
}