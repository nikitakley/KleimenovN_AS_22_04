#include <iostream>
#include "Kleimenov_Dish.h"
#include "Utilities.h"

int Kleimenov_Dish::maxId = 0;

void Kleimenov_Dish::addDish(istream& in)
{
    Id = ++maxId;
    cout << "ID: " << Id;
    cout << "\nВведите наименование блюда: ";
    getline(in, dishName);
    cout << "\nВведите цену блюда: ";
    dishPrice = GetCorrectData(50, 10000);
    cout << "\nВведите вес блюда: ";
    dishWeight = GetCorrectData(100.0, 3000.0);
    cout << "\nЕсли блюдо в наличии, укажите 1; иначе - 0: ";
    dishAvailability = GetCorrectData(0, 1);
}

void Kleimenov_Dish::printDish(ostream& out)
{
    out << "ID: " << Id << "\tНаименование: " << dishName <<
        "\tЦена: " << dishPrice << "\tВес: " << dishWeight;
}