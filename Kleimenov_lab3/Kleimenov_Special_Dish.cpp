#include "Kleimenov_Special_Dish.h"
#include "Utilities.h"

void Kleimenov_Special_Dish::addDish(istream& in)
{
    Kleimenov_Dish::addDish(in);
    cout << "\nВведите сезон блюда: ";
    seasonDish = GetCorrectSeason();
    cout << "\nЕсли блюдо от шефа, укажите 1; иначе - 0: ";
    isChef = GetCorrectData(0, 1);
}

void Kleimenov_Special_Dish::printDish(ostream& out)
{
    Kleimenov_Dish::printDish(out);
    out << "\tСезон: " << seasonDish << "\tОсобое (от шефа): " << isChef;
}