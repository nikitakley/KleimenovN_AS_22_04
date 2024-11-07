// Kleimenov_lab3.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
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
		cout << endl << "�������:" << endl;
		cout << "1) �������� �����" << endl;
		cout << "2) �������� ������ �����" << endl;
		cout << "3) ������� ��� �����" << endl;
		cout << "4) ������� ������ �� �����" << endl;
		cout << "5) �������� ������ � ����" << endl;
		cout << "6) �������� ������" << endl;
		cout << "0) �����" << endl;
		cout << "\n����������, ������� ����� �������: ";
		switch (GetCorrectData(0, 6))
		{
		case 1:
		{
			cout << "\n[1] ���������� ������ �����..." << endl;
			grDish.addDish();
			break;
		}
		case 2:
		{
			cout << "\n[2] ���������� ������� �����..." << endl;
			grDish.addSpecialDish();
			break;
		}
		case 3:
		{
			cout << "\n[3] ����� ���� ����..." << endl;
			cout << grDish;
			break;
		}
		case 4:
		{
			cout << "\n[4] ������ ������ �� �����..." << endl;
			string fileRead;
			cout << "\n������� �������� �����, �� �������� ����� ��������� ������ [��� ������]:" << endl;
			getline(cin, fileRead);
			fileRead += ".dat";

			ifstream ifs(fileRead, std::ios::binary); // ��������� ���� ��� ������
			if (ifs.is_open()) {
				boost::archive::text_iarchive ia(ifs); // ������� ����� ��� ��������������
				ia >> grDish.vectorGet();  // ��������� ������ � ������� ������ grDish
				cout << "\n������ ������� ���������!" << endl;
			}
			else {
				cout << "\n������ ����� �� ����������." << endl;
			}
			break;
		}
		case 5:
		{
			cout << "[5] ���������� ������ � ����..." << endl;
			string fileWrite;
			cout << "\n������� �������� �����, � ������� ����� ��������� ������ [��� ������]:" << endl;
			getline(cin, fileWrite);
			fileWrite += ".dat";
			
			ofstream ofs(fileWrite, std::ios::binary); // ��������� ���� ��� ������
			if (ofs.is_open()) {
				boost::archive::text_oarchive oa(ofs); // ������� ����� ��� ������������
				oa << grDish.vectorGet();  // ��������� ������ �� �������� ������� grDish
				cout << "\n������ ������� ���������!" << endl;
			}
			else {
				cout << "\n������ ��� �������� ����� ��� ������." << endl;
			}
			break;
		}
		case 6:
		{
			cout << "\n[6] �������� ������ ����..." << endl;
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