#include "pch.h"
#include "Kleimenov_Group.h"
#include "Utilities.h"

void Kleimenov_GrDishes::addDish()
{
	shared_ptr<Kleimenov_Dish> dishptr = make_shared <Kleimenov_Dish>();
	dishptr->addDish(cin);
	ptrsDishes.push_back(dishptr);
}

void Kleimenov_GrDishes::addSpecialDish()
{
	shared_ptr<Kleimenov_Special_Dish> dishptr = make_shared <Kleimenov_Special_Dish>();
	dishptr->addDish(cin);
	ptrsDishes.push_back(dishptr);
}

//void Kleimenov_GrDishes::readDishes(const string& fileIn)
//{
//	std::ifstream ifs(fileIn);
//	boost::archive::text_iarchive ia(ifs);
//	ia >> *this;
//}
//
//void Kleimenov_GrDishes::saveDishes(const string& fileOut)
//{
//	ofstream ofs(fileOut);
//	boost::archive::text_oarchive oa(ofs);
//	oa << *this;
//}

void Kleimenov_GrDishes::deleteDishes()
{
	ptrsDishes.clear();
}

ostream& operator<<(ostream& grout, const Kleimenov_GrDishes& group)
{
	grout << "Имеющиеся блюда:" << endl;
	if (group.ptrsDishes.size() == 0)
		grout << "Блюд нет.";
	else
	{
		for (auto& ptr : group.ptrsDishes) {
			ptr->printDish(cout);
			cout << endl;
		}
	}
	grout << endl;
	return grout;
}