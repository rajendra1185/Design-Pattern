#include  <iostream>
#include "ToyFactory.h"
using namespace std;


int main()
{
	int type;
	while (1)
	{
		cout << endl << "Enter type or Zero to Exit " << endl;
		cin >> type;
		if (!type)
			break;
		Toy* tObj = ToyFactory::createToy(type);
		if (tObj)
		{
			tObj->showProduct();
			delete tObj;
		}
	}
	cout << "Exit .. " << endl;
	return 0;
}