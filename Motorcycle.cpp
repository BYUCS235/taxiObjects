#include "Motorcycle.h"


Motorcycle::Motorcycle(string name, int miles, double size) : Motor(name, WHEELSONAMOTORCYCLE , miles, size)
{
}


Motorcycle::~Motorcycle(void)
{
}

int Motorcycle::taxreport()
{
	int tax;

	if (enginesize > 2) {
		tax = int(((endmiles - startmiles) * 0.05) + 0.5); // round to int
	}
	else {
		tax = int(((endmiles - startmiles) * 0.3) + 0.5); // round to int
	}
	reset();
	return tax;
}
