#include <sstream>
#include "Ped.h"

Ped::Ped(string name, int s): Human(name,WHEELSONAPED), seats(s)
{
}

string Ped::tostring() const {
	ostringstream s;

	s << Taxi::tostring() << " seats: " << seats;
	return s.str();
}

int Ped::taxreport() {
	double tax;

	if (trips<60) {
		tax = 1.5*trips;
	}
	else {
		tax = 90+2*(trips-60);
	}
	if (seats > 1) {
		tax = tax*1.5;
	}
	reset();
	return int(tax+0.5);
}

Ped::~Ped(void)
{
}
