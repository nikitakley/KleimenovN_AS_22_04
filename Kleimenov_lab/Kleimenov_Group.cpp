#include "Kleimenov_Group.h"
#include "Utilities.h"

void Kleimenov_GrDishes::addDish()
{
	Kleimenov_Dish *dish0 = new Kleimenov_Dish;
	cin >> *dish0;
	ptrsDishes.push_back(dish0);
}

void Kleimenov_GrDishes::deleteDishes()
{
	for (auto& elem : ptrsDishes)
		delete elem;
	ptrsDishes.clear();
}

ostream& operator<<(ostream& grout, const Kleimenov_GrDishes& group)
{
	grout << "Имеющиеся блюда:" << endl;
	if (group.ptrsDishes.size() == 0)
		grout << "Блюд нет.";
	else
	{
		for (const auto& elem : group.ptrsDishes) {
			grout << *elem << endl;
		}
	}
	grout << endl;
	return grout;
}

void Kleimenov_GrDishes::readDishes(ifstream& fin)
{
	if (!fin.is_open())
		cout << "\nТакого файла не существует.";
	else
	{
		deleteDishes();
		int n = 0;
		fin >> n;
		for (int i = 0; i < n; i++) {
			Kleimenov_Dish* dish0 = new Kleimenov_Dish;
			fin >> *dish0;
			ptrsDishes.push_back(dish0);
		}
		cout << "\nДанные успешно загружены!" << endl;
	}
}

void Kleimenov_GrDishes::saveDishes(ofstream& fout)
{
	if (ptrsDishes.size() == 0)
		cout << "\nСписок блюд пуст." << endl;
	else
	{
		fout << ptrsDishes.size() << endl;
		for (auto elem : ptrsDishes) {
			fout << *elem;
		}
		cout << "\nДанные успешно сохранены!" << endl;
	}
}


