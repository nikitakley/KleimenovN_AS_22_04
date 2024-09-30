#pragma once
#include "framework.h"
#include "Kleimenov_Dish.h"

class Kleimenov_Special_Dish : public Kleimenov_Dish 
{
private:
	string seasonDish = "None";
	bool isChef = false;

public:
	DECLARE_SERIAL(Kleimenov_Special_Dish);
	Kleimenov_Special_Dish() {}

	void addDish(istream& in) override;
	void printDish(ostream& out) override;
	void Serialize(CArchive& ar) override;
	virtual ~Kleimenov_Special_Dish() {}
};