#include "Kleimenov_Dish.h"
#include "Utilities.h"

int Dish::maxId = 0;

int Dish::GetId()
{
    return Id;
}

istream& operator>>(istream& in, Dish& newDish)
{
    newDish.Id = ++newDish.maxId;
    cout << "ID: " << newDish.Id;
    cout << "\nВведите наименование блюда: ";
    //in.ignore();
    getline(in, newDish.dishName);
    cout << "\nВведите цену блюда: ";
    newDish.dishPrice = GetCorrectData(50, 10000);
    cout << "\nВведите вес блюда: ";
    newDish.dishWeight = GetCorrectData(100.0, 3000.0);
    cout << "\nЕсли блюдо в наличии, укажите 1; иначе - 0: ";
    newDish.dishAvailability = GetCorrectData(0, 1);
    return in;
}

ostream& operator<<(ostream& out, const Dish& newDish)
{
    if (newDish.dishName == "None")
    {
        out << "Блюд в наличии нет." << endl;
    }
    else
    {
        out << "ID: " << newDish.Id << "\tНаименование: " << newDish.dishName <<
            "\tЦена: " << newDish.dishPrice << "\tВес: " << newDish.dishWeight;
    }

    return out;
}

ifstream& operator>>(ifstream& fin, Dish& newDish)
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

ofstream& operator<<(ofstream& fout, const Dish& newDish)
{
    fout << newDish.Id << "\n" << newDish.dishName << "\n" << newDish.dishPrice << "\n" <<
        newDish.dishWeight << "\n" << newDish.dishAvailability << endl;
    return fout;
}