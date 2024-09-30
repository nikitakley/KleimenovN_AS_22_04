#include "pch.h"
#include "Kleimenov_Special_Dish.h"
#include "Utilities.h"

IMPLEMENT_SERIAL(Kleimenov_Special_Dish, Kleimenov_Dish, VERSIONABLE_SCHEMA | 0);

void Kleimenov_Special_Dish::addDish(istream& in)
{
	Kleimenov_Dish::addDish(in);
    cout << "\nВведите сезон блюда: ";
    getline(in, seasonDish);
    cout << "\nЕсли блюдо от шефа, укажите 1; иначе - 0: ";
    isChef = GetCorrectData(0, 1);
}

void Kleimenov_Special_Dish::printDish(ostream& out)
{
    Kleimenov_Dish::printDish(out);
    out << "\tСезон: " << seasonDish << "\tОсобое (от шефа):" << isChef;
}

void Kleimenov_Special_Dish::Serialize(CArchive& ar)
{
    Kleimenov_Dish::Serialize(ar);
    if (ar.IsStoring())
    {
        CString strw_seasonDish;
        strw_seasonDish = CString(seasonDish.c_str());
        ar << strw_seasonDish << isChef;
    }
    else
    {
        CString strr_seasonDish;
        ar >> strr_seasonDish >> isChef;
        seasonDish = CT2CA(strr_seasonDish);
    }
}

