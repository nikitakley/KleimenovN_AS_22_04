#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Kleimenov_Dish
{
protected:
	static int maxId;
	int Id;
	string dishName = "None";
	int dishPrice = 0;
	double dishWeight = 0.0;
	bool dishAvailability = 1;

	int GetId();

public:
	friend istream& operator>> (istream& in, Kleimenov_Dish& newDish);
	friend ostream& operator<< (ostream& out, const Kleimenov_Dish& newDish);
	friend ifstream& operator>> (ifstream& fin, Kleimenov_Dish& newDish);
	friend ofstream& operator<< (ofstream& fout, const Kleimenov_Dish& newDish);
};

