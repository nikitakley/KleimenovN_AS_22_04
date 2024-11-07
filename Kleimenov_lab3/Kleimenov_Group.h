#pragma once
#include <iostream>
#include <fstream>
#include "Kleimenov_Dish.h"
#include "Kleimenov_Special_Dish.h"

class Kleimenov_GrDishes
{
public:
	void addDish();
	void addSpecialDish();
	//void readDishes(const string& fileIn);
	//void saveDishes(const string& fileOut);
	void deleteDishes();

	friend ostream& operator<<(ostream& grout, const Kleimenov_GrDishes& group);

	~Kleimenov_GrDishes() {}

	vector<shared_ptr<Kleimenov_Dish>>& vectorGet()
	{
		return ptrsDishes;
	}

private:
	vector<shared_ptr<Kleimenov_Dish>> ptrsDishes;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive& ar, const unsigned int version)
	{
		ar& ptrsDishes;
	}
};