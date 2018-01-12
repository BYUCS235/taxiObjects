#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Taxiinterface.h"
using namespace std;

class TaxiCompanyInterface
{
	public:
		TaxiCompanyInterface(){}

		virtual bool maketaxi(string info) = 0;

		virtual bool removetaxi(int taxinumber) = 0;

		virtual Taxiinterface* gettaxi(int taxiNumber) = 0;

		virtual ~TaxiCompanyInterface(){}


	
		
};
