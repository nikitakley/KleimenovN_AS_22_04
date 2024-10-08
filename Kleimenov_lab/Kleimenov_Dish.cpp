#include "Kleimenov_Dish.h"
#include "Utilities.h"

int Kleimenov_Dish::maxId = 0;

int Kleimenov_Dish::GetId()
{
    return Id;
}

istream& operator>>(istream& in, Kleimenov_Dish& newDish)
{
    newDish.Id = ++newDish.maxId;
    cout << "ID: " << newDish.Id;
    cout << "\n������� ������������ �����: ";
    getline(in, newDish.dishName);
    cout << "\n������� ���� �����: ";
    newDish.dishPrice = GetCorrectData(50, 10000);
    cout << "\n������� ��� �����: ";
    newDish.dishWeight = GetCorrectData(100.0, 3000.0);
    cout << "\n���� ����� � �������, ������� 1; ����� - 0: ";
    newDish.dishAvailability = GetCorrectData(0, 1);
    return in;
}

ostream& operator<<(ostream& out, const Kleimenov_Dish& newDish)
{
    if (newDish.dishName == "None")
    {
        out << "���� � ������� ���." << endl;
    }
    else
    {
        out << "ID: " << newDish.Id << "\t������������: " << newDish.dishName <<
            "\t����: " << newDish.dishPrice << "\t���: " << newDish.dishWeight;
    }

    return out;
}

ifstream& operator>>(ifstream& fin, Kleimenov_Dish& newDish)
{
    fin >> newDish.Id;
    newDish.maxId = newDish.Id;
    fin.ignore();
    getline(fin, newDish.dishName);
    fin >> newDish.dishPrice;
    fin >> newDish.dishWeight;
    fin >> newDish.dishAvailability;
    return fin;
}

ofstream& operator<<(ofstream& fout, const Kleimenov_Dish& newDish)
{
    fout << newDish.Id << "\n" << newDish.dishName << "\n" << newDish.dishPrice << "\n" <<
        newDish.dishWeight << "\n" << newDish.dishAvailability << endl;
    return fout;
}