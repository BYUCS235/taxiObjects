#pragma once
#include "Taxi.h"

class Human :
	public Taxi
{
public:
	Human(string name, int wheels);
	virtual bool trip();
	~Human(void);
};

