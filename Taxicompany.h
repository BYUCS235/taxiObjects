#pragma once

#include<vector>
#include<string>
#include"Taxiinterface.h"
#include"TaxiCompanyInterface.h"
#include"Bicycle.h"
#include"Car.h"
#include"Ped.h"
#include"Motorcycle.h"

class Taxicompany :
	public TaxiCompanyInterface
{
protected:
	vector<Taxiinterface*> taxis;
public:
	Taxicompany(void);
	virtual bool maketaxi(string info);
	virtual bool removetaxi(int taxinumber);
	virtual Taxiinterface* gettaxi(int taxiNumber);
	~Taxicompany(void);
};

