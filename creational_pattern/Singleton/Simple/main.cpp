#include "Singleton.h"
#include <iostream>
using namespace std;

int main()
{
	Singleton& sObj = Singleton::m_Instance();
	sObj.method1();
	return 0;

}