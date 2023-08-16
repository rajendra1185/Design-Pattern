#pragma once
#include <iostream>
#include <string>
using namespace std;
class Toy
{
protected:
	string m_Name;
	int m_Price;
public:
	/*Toy(string name, int price)
	{
		m_Name = name;
		m_Price = price;
	}*/
	virtual void prepareParts() = 0;
	virtual void combineParts() = 0;
	virtual void assembleParts() = 0;
	virtual void applyLabel() = 0;
	virtual void showProduct() = 0;
};

class Car :public Toy
{
public:
	void prepareParts();
	void combineParts();
	void assembleParts();
	void applyLabel();
	void showProduct();
};
class Bike :public Toy
{
public:
	void prepareParts();
	void combineParts();
	void assembleParts();
	void applyLabel();
	void showProduct();
};
class Truck :public Toy
{
public:
	void prepareParts();
	void combineParts();
	void assembleParts();
	void applyLabel();
	void showProduct();
};

