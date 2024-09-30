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

	virtual void addDish(istream& in) override;
	virtual void printDish(ostream& out) override;
	virtual void Serialize(CArchive& ar) override;
	virtual ~Kleimenov_Special_Dish() {}
};