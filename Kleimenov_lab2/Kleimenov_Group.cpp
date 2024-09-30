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

//void Kleimenov_GrDishes::readDishes(string& fileIn)
//{
//	CFileStatus fileFlag;
//	if (CFile::GetStatus(fileIn.c_str(), fileFlag)) 
//	{
//		CFile f(fileIn.c_str(), CFile::modeRead);
//		CArchive ar(&f, CArchive::load);
//		int n;
//		ar >> n;
//		for (int i = 0; i < n; i++) {
//			Kleimenov_Dish* dishptr = nullptr;
//			ar >> dishptr;
//			shared_ptr<Kleimenov_Dish> New(dishptr);
//			ptrsDishes.push_back(New);
//		}
//		ar.Close();
//		cout << "\nДанные успешно загружены!" << endl;
//	}
//	else
//	{
//		cout << "\nТакого файла не существует.";
//	}
//}
//
//void Kleimenov_GrDishes::saveDishes(string& fileOut)
//{
//	CFile f(fileOut.c_str(), CFile::modeCreate | CFile::modeWrite);
//	CArchive ar(&f, CArchive::store);
//	ar << ptrsDishes.size();
//	for (auto& ptr : ptrsDishes)
//	{
//		auto elem = ptr.get();
//		ar << elem;
//	}
//	ar.Close();
//	cout << "\nДанные успешно загружены!" << endl;
//}