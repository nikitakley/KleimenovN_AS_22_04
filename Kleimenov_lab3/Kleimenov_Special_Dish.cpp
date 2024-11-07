#include "Kleimenov_Special_Dish.h"
#include "Utilities.h"

void Kleimenov_Special_Dish::addDish(istream& in)
{
    Kleimenov_Dish::addDish(in);
    cout << "\n������� ����� �����: ";
    seasonDish = GetCorrectSeason();
    cout << "\n���� ����� �� ����, ������� 1; ����� - 0: ";
    isChef = GetCorrectData(0, 1);
}

void Kleimenov_Special_Dish::printDish(ostream& out)
{
    Kleimenov_Dish::printDish(out);
    out << "\t�����: " << seasonDish << "\t������ (�� ����): " << isChef;
}