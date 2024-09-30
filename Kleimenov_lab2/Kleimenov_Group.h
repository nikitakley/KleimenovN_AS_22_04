#pragma once
#include "framework.h"
#include <fstream>
#include "Kleimenov_Dish.h"
#include "Kleimenov_Special_Dish.h"

class Kleimenov_GrDishes
{
public:
	void addDish();
	void addSpecialDish();
	//void readDishes(string& fileIn);
	//void saveDishes(string& fileOut);
	void deleteDishes();

	friend ostream& operator<<(ostream& grout, const Kleimenov_GrDishes& group);

	~Kleimenov_GrDishes(){}

	vector<shared_ptr<Kleimenov_Dish>>& vectorGet()
	{
		return ptrsDishes;
	}

private:
	vector<shared_ptr<Kleimenov_Dish>> ptrsDishes;
};