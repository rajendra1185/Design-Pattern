#include "ToyFactory.h"

Toy* ToyFactory:: createToy(int type)
{
	Toy* toy = NULL;

	switch (type)
	{
	case 1:
		toy = new Car();
		break;
	case 2:
		toy = new Bike();
		break;
	case 3:
		toy = new Truck();
		break;
	default:
		cout << "Invalid type" << endl;
		return NULL;
	}
	toy->prepareParts();
	toy->combineParts();
	toy->assembleParts();
	toy->applyLabel();
	return toy;
}