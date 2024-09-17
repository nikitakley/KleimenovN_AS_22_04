#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "Kleimenov_Dish.h"
#include "Kleimenov_Group.h"
#include "Utilities.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Kleimenov_GrDishes grDish;

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
			grDish.addDish();
			break;
		}
		case 2:
		{
			cout << "\n[2] ����� ���� ����..." << endl;
			cout << grDish;
			break;
		}
		case 3:
		{
			cout << "\n[3] ������ ������ �� �����..." << endl;
			string fileRead;
			ifstream fin;
			cout << "\n������� �������� �����, �� �������� ����� ��������� ������ [��� ������]:" << endl;
			getline(cin, fileRead);
			fin.open(fileRead + ".txt");
			grDish.readDishes(fin);
			fin.close();
			break;
		}
		case 4:
		{
			cout << "[4] ���������� ������ � ����..." << endl;
			string fileOut;
			ofstream fout;
			cout << "\n������� �������� �����, � ������� ����� ��������� ������:" << endl;
			getline(cin, fileOut);
			fout.open(fileOut + ".txt");
			grDish.saveDishes(fout);
			fout.close();
			break;
		}
		case 5:
		{
			cout << "\n[5] �������� ������ ����..." << endl;
			grDish.deleteDishes();
			cout << "������ ������.\n";
			break;
		}
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