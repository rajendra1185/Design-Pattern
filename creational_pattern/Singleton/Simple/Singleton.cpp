#include "Singleton.h"

Singleton Singleton::s_instance;



Singleton& Singleton::m_Instance()
{
	return s_instance;
}

void Singleton::method1()
{

}

void Singleton::method2()
{

}
