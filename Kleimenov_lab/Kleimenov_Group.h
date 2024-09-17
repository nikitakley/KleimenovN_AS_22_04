#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Kleimenov_Dish.h"

using namespace std;

class Kleimenov_GrDishes
{
public:
	void addDish();
	void readDishes(ifstream& fin);
	void saveDishes(ofstream& fout);
	void deleteDishes();

	friend ostream& operator<<(ostream& grout, const Kleimenov_GrDishes& group);

	~Kleimenov_GrDishes()
	{
		for (auto& elem : ptrsDishes)
			delete elem;
	}

protected:
	vector<Kleimenov_Dish*> ptrsDishes;
};