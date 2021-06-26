#include "ObserverPattern.h"

//ConcreteWeatherStation::ConcreteWeatherStation()
//{
//	this->listOfObserver = new ;
//}
void ConcreteWeatherStation::add(IObserver* IObj)
{
	listOfObserver.push_back(IObj);
}
void ConcreteWeatherStation::remove(IObserver* IObj)
{
	listOfObserver.erase(find(listOfObserver.begin(), listOfObserver.end(), IObj));
}
void ConcreteWeatherStation::notify()
{
	for (auto i = 0; i < listOfObserver.size(); i++)
	{
		listOfObserver[i]->update();
	}
}
int ConcreteWeatherStation::getTemprature()
{
	return this->temprature;
}
void ConcreteWeatherStation::setTemprature(int temp)
{
	this->temprature = temp;
	notify();
}

ConcretePhoneDisplay::ConcretePhoneDisplay(ConcreteWeatherStation* IObj)
{
	this->IObj = IObj;
	IObj->add(this);
}
void ConcretePhoneDisplay::update()
{
	cout<<"Temprature dislayed in Phone :: "<<IObj->getTemprature()<<endl;
}

ConcreteLCDDisplay::ConcreteLCDDisplay(ConcreteWeatherStation* IObj)
{
	this->IObj = IObj;
	IObj->add(this);
}
void ConcreteLCDDisplay::update()
{
	cout << "Temprature dislayed in LCD :: " << IObj->getTemprature() << endl;
}