#pragma once
#include<string>

using namespace std;

class Taxiinterface {
public:
	virtual string tostring() const = 0;
	virtual int taxreport() = 0;
	virtual bool trip(int miles) = 0;
	virtual bool trip () = 0;
};