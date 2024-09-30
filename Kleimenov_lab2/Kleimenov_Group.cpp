#include "pch.h"
#include "Kleimenov_Group.h"
#include "Utilities.h"

void Kleimenov_GrDishes::addDish()
{
	shared_ptr<Kleimenov_Dish> dishptr = make_shared <Kleimenov_Dish> ();
	dishptr->addDish(cin);
	ptrsDishes.push_back(dishptr);
}

void Kleimenov_GrDishes::deleteDishes()
{
	ptrsDishes.clear();
}

ostream& operator<<(ostream& grout, const Kleimenov_GrDishes& group)
{
	grout << "��������� �����:" << endl;
	if (group.ptrsDishes.size() == 0)
		grout << "���� ���.";
	else
	{
		for (const auto& elem : group.ptrsDishes) {
			elem->printDish(cout);
		}
	}
	grout << endl;
	return grout;
}

//void Kleimenov_GrDishes::readDishes(ifstream& fin)
//{
//	if (!fin.is_open())
//		cout << "\n������ ����� �� ����������.";
//	else
//	{
//		deleteDishes();
//		int n = 0;
//		fin >> n;
//		for (int i = 0; i < n; i++) {
//			Kleimenov_Dish* dish0 = new Kleimenov_Dish;
//			fin >> *dish0;
//			ptrsDishes.push_back(dish0);
//		}
//		cout << "\n������ ������� ���������!" << endl;
//	}
//}
//
//void Kleimenov_GrDishes::saveDishes(ofstream& fout)
//{
//	if (ptrsDishes.size() == 0)
//		cout << "\n������ ���� ����." << endl;
//	else
//	{
//		fout << ptrsDishes.size() << endl;
//		for (auto elem : ptrsDishes) {
//			fout << *elem;
//		}
//		cout << "\n������ ������� ���������!" << endl;
//	}
//}