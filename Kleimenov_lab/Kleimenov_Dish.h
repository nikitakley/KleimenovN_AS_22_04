#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Dish
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
	friend istream& operator>> (istream& in, Dish& newDish);
	friend ostream& operator<< (ostream& out, const Dish& newDish);
	friend ifstream& operator>> (ifstream& fin, Dish& newDish);
	friend ofstream& operator<< (ofstream& fout, const Dish& newDish);
};

