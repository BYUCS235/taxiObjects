#include <sstream>
#include "Motor.h"


Motor::Motor(string aname, int nwheels, int miles, double size) : Taxi(aname, nwheels), startmiles(miles), endmiles(miles), enginesize(size)
{
}


Motor::~Motor(void)
{
}

string Motor::tostring() const
{
	stringstream s;
	
	s << Taxi::tostring() << " startmiles: " << startmiles << " endmiles: " << endmiles << " enginesize: " << enginesize;
	return s.str();
}

bool Motor::trip(int miles)
{
	trips++;
	endmiles = endmiles+miles;
	return true;
}

void Motor::reset() {
	Taxi::reset();
	startmiles = endmiles;
}
