#pragma once
#include "motor.h"
class Motorcycle :
	public Motor
{
protected:
	static const int WHEELSONAMOTORCYCLE = 3; 
public:
	Motorcycle(string name, int miles, double enginesize);
	virtual int taxreport();
	~Motorcycle(void);
};

