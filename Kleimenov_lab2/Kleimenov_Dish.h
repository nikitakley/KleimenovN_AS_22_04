#pragma once
#include "framework.h"
#include <fstream>

class Kleimenov_Dish : public CObject
{
protected:
	static int maxId;
	int Id = 0;
	string dishName = "None";
	int dishPrice = 0;
	double dishWeight = 0.0;
	bool dishAvailability = 0;

public:
	DECLARE_SERIAL(Kleimenov_Dish);
	Kleimenov_Dish() {}

	virtual void addDish(istream& in);
	virtual void printDish(ostream& out);
	virtual void Serialize(CArchive& ar);
	virtual ~Kleimenov_Dish() {}
};

