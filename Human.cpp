#include "Human.h"
#include<string>

Human::Human(string name, int wheels) : Taxi(name, wheels)
{
}

bool Human::trip()
{
	trips++;
	return true;
}

Human::~Human(void)
{
}
