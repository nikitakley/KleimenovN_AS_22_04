#include "Kleimenov_Group.h"
#include "Utilities.h"

void Group_Dishes::addDish()
{
	Dish *dish0 = new Dish;
	cin >> *dish0;
	ptrsDishes.push_back(dish0);
}

void Group_Dishes::deleteDishes()
{
	for (auto& elem : ptrsDishes)
		delete elem;
	ptrsDishes.clear();
}

ostream& operator<<(ostream& grout, const Group_Dishes& group)
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

void Group_Dishes::readDishes(ifstream& fin)
{
	if (!fin.is_open())
		cout << "\nТакого файла не существует." << endl;
	else
	{
		deleteDishes();
		int n = 0;
		fin >> n;
		for (int i = 0; i < n; i++) {
			Dish* dish0 = new Dish;
			fin >> *dish0;
			ptrsDishes.push_back(dish0);
		}
	}
}


