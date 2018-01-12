#include "Taxi.h"
#include <sstream>


Taxi::Taxi(string anowner, int numwheels) : wheels(numwheels), owner(anowner), id(nextid++)
{
	this->trips = 0;
}


Taxi::~Taxi(void)
{
}

string Taxi::tostring() const {
	ostringstream s;

	s << "Owner: " << owner << " id: " << id << " trips: " << trips << " wheels: " << wheels;
	return s.str();
}

bool Taxi::trip() {
		return false;
	}

bool Taxi::trip(int miles) {
		return false;
	}

void Taxi::reset() {
	trips = 0;
}

int Taxi::nextid = 0;