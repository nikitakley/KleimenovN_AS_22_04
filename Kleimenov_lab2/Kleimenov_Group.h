#pragma once
#include "framework.h"
#include <fstream>
#include "Kleimenov_Dish.h"
#include "Kleimenov_Special_Dish.h"

class Kleimenov_GrDishes
{
public:
	void addDish();
	//void readDishes(ifstream& fin);
	//void saveDishes(ofstream& fout);
	void deleteDishes();

	friend ostream& operator<<(ostream& grout, const Kleimenov_GrDishes& group);

	~Kleimenov_GrDishes(){}

protected:
	vector<shared_ptr<Kleimenov_Dish>> ptrsDishes;
};