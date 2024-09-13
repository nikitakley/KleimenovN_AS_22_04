#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Kleimenov_Dish.h"

using namespace std;

class Group_Dishes
{
public:
	void addDish();
	void readDishes(ifstream& fin);
	void saveDishes(ofstream& fout);
	void deleteDishes();

	friend ostream& operator<<(ostream& grout, const Group_Dishes& group);

	~Group_Dishes()
	{
	}

protected:
	vector<Dish*> ptrsDishes;
};