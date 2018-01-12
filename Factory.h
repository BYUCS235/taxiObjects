#pragma once
#include "TaxiCompanyInterface.h"
#include "TaxiCompany.h"

class Factory
{
public:
	Factory(void);

	TaxiCompanyInterface* createTaxiCompany();

	~Factory(void);
};

