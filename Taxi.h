#pragma once
#include "Taxiinterface.h"

using namespace std;

class Taxi :
	public Taxiinterface
{
protected:
	const string owner;
	const int id;
	int trips;
	const int wheels;
	static int nextid;
	virtual void reset();
public:
	Taxi(string anowner, int numwheels);
	~Taxi(void);
	virtual string tostring() const;
	virtual bool trip();
	virtual bool trip(int miles);

};

