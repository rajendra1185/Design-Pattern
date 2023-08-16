#pragma once
class Singleton
{
	Singleton() =default;
	static Singleton s_instance;
public:
	static Singleton &m_Instance();
	void method1();
	void method2();

};