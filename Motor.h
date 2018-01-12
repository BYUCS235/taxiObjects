#pragma once
#include "taxi.h"
class Motor :
	public Taxi
{
protected:
	int startmiles;
	int endmiles;
	const double enginesize;
public:
	Motor(string aname, int nwheels, int miles, double size);
	virtual string tostring() const;
	virtual bool trip(int miles);
	virtual void reset();
	~Motor(void);
};

