#include "ObjectCreator.h"
/*Class Car Member Function Definations*/
void Car::prepareParts()
{
	cout << "Preparing Car Parts" << endl;
}
void Car::combineParts()
{
	cout << "Combining Car Parts" << endl;
}
void Car::assembleParts()
{
	cout << "Assembling Car Parts" << endl;
}
void Car::applyLabel()
{
	cout << "Applying Car Parts" << endl;
	m_Name = "Car";
	m_Price = 10;

}
void Car::showProduct()
{
	cout << "Name : " << m_Name << " is having Price : " << m_Price << endl;
}


/*Class Bike Member Function Definations*/
void Bike::prepareParts()
{
	cout << "Preparing Bike Parts" << endl;
}
void Bike::combineParts()
{
	cout << "Combining Bike Parts" << endl;
}
void Bike::assembleParts()
{
	cout << "Assembling Bike Parts" << endl;
}
void Bike::applyLabel()
{
	cout << "Applying Bike Parts" << endl;
	m_Name = "Bike";
	m_Price = 10;
}
void Bike::showProduct()
{
	cout << "Name : " << m_Name << " is having Price : " << m_Price << endl;
}


/*Class Truck Member Function Definations*/
void Truck::prepareParts()
{
	cout << "Preparing Truck Parts" << endl;
}
void Truck::combineParts()
{
	cout << "Combining Truck Parts" << endl;
}
void Truck::assembleParts()
{
	cout << "Assembling Truck Parts" << endl;
}
void Truck::applyLabel()
{
	cout << "Applying Truck Parts" << endl;
	m_Name = "Truck";
	m_Price = 10;
}
void Truck::showProduct()
{
	cout << "Name : " << m_Name << " is having Price : " << m_Price << endl;
}