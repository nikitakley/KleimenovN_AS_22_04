#include <iostream>
#include "Kleimenov_Dish.h"
#include "Utilities.h"

int Kleimenov_Dish::maxId = 0;

void Kleimenov_Dish::addDish(istream& in)
{
    Id = ++maxId;
    cout << "ID: " << Id;
    cout << "\n������� ������������ �����: ";
    getline(in, dishName);
    cout << "\n������� ���� �����: ";
    dishPrice = GetCorrectData(50, 10000);
    cout << "\n������� ��� �����: ";
    dishWeight = GetCorrectData(100.0, 3000.0);
    cout << "\n���� ����� � �������, ������� 1; ����� - 0: ";
    dishAvailability = GetCorrectData(0, 1);
}

void Kleimenov_Dish::printDish(ostream& out)
{
    out << "ID: " << Id << "\t������������: " << dishName <<
        "\t����: " << dishPrice << "\t���: " << dishWeight;
}