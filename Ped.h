#pragma once
#include "human.h"
class Ped :
	public Human
{
protected:
	const int seats;
	static const int WHEELSONAPED = 2;
public:
	Ped(string name, int s);
	virtual string tostring() const;
	virtual int taxreport();
	~Ped(void);
};

