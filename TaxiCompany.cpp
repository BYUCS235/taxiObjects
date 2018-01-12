#include<sstream>
#include "Taxicompany.h"


Taxicompany::Taxicompany(void)
{
}

bool Taxicompany::maketaxi(string info)
{
	stringstream s(info);
	string type;

	s >> type;
	/* Create the right type based on the string just like in neighborhood 3.
	Note that I will let you sort out the details here, I should be
	looking through the rest of the string, validate that the info is
	valid and create the desired type of taxi with
	the information appearing in the stream s.
	*/
	//cout << type;

	if (type == "Bicycle") {
		taxis.push_back(new  Bicycle("kevinb"));
	}
	else if (type == "Car") {
		taxis.push_back(new  Car("kevinc",1000,2.1));
	}
	// Should also handle the Motorcycle and the Ped, left for you.
	else {
		return false;
	}

	return true;
}

bool Taxicompany::removetaxi(int taxinumber)
{
	/* I should look through the taxis and find the one with the right id
	I will let you figure out how to do that. Instead I will just remove the
	third one, if there are at least 3)
	*/
	if (taxis.size() >= 3) {
		taxis.erase (taxis.begin()+2);
		return true;
	}
	return false;
}

Taxiinterface* Taxicompany::gettaxi(int taxiNumber)
{
	/* I should find the one with the given taxi number
	but again I will leave that to you. Instead I will
	return the 4 one unless there are not that many
	*/
	if (taxis.size() >= 4) {
		return taxis[3];
	}
	return NULL;
}

Taxicompany::~Taxicompany(void)
{
}
