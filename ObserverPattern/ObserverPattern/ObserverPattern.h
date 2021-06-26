#pragma once
#include <iostream>
#include <vector>
using namespace std;
class IObserver;

class IObservable {
public:
	virtual void add(IObserver* IObj) = 0;
	virtual void remove(IObserver* IObj) = 0;
	virtual void notify() = 0;

};

class ConcreteWeatherStation :public IObservable
{
private:
	vector<IObserver*> listOfObserver;
	int temprature;
public:
	//ConcreteWeatherStation();
	void add(IObserver* IObj);
	void remove(IObserver* IObj);
	void notify();
	int getTemprature();
	void setTemprature(int temp);
};
class IObserver {
public:
	virtual void update() = 0;
};

class ConcretePhoneDisplay :public IObserver
{
private:
	ConcreteWeatherStation *IObj;
public:
	ConcretePhoneDisplay(ConcreteWeatherStation* IObj);
	void update();
};
class ConcreteLCDDisplay :public IObserver
{
private:
	ConcreteWeatherStation* IObj;
public:
	ConcreteLCDDisplay(ConcreteWeatherStation* IObj);
	void update();
};