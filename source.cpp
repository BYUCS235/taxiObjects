#include<iostream>
#include<string>
#include"Factory.h"

using namespace std;

int main() {
	cout << "starting...\n\n";

	Factory mycompanyfactory;

	TaxiCompanyInterface* mycompany = mycompanyfactory.createTaxiCompany();

	cout << "Note that these will return false (and print 0) when they fail.\n\n";

	cout << "Add some taxis, REMEMBER THE DATA IS BEING IGNORED because maketaxi is not finished!!\n";
	// Note that because Taxicompany maketaxi is not done, the data here will be mostly IGNORED!!
	cout << mycompany->maketaxi("Car Fred 32000 2.5") << endl; // add a taxi for Fred
	cout << mycompany->maketaxi("Car Wilma 43000 1.7") << endl; // add one for Wilma
	cout << mycompany->maketaxi("Car Betty 46000 1.5") << endl; // add one for Betty
	cout << mycompany->maketaxi("Car Bambam 100000 6") << endl; // add one for Bambam
	cout << mycompany->maketaxi("Bicycle Pebbles") << endl; // add one for Pebbles
	cout << mycompany->maketaxi("Bicycle Barny") << endl;// add one for Barny
	cout << mycompany->maketaxi("Invalid Barny") << endl; // Try to add an invalid one

	cout << "\nPrint one out\n";
	// gettaxi is also NOT done so this will NOT get the right taxi!
	cout << mycompany->gettaxi(3)->tostring() << endl; 

	cout << "\nTry to go on some trips\n";
	// gettaxi is also NOT done so this will NOT get the right taxi!
	cout << mycompany->gettaxi(3)->trip() << endl; 
	cout << mycompany->gettaxi(3)->trip() << endl; 
	cout << mycompany->gettaxi(3)->trip(47) << endl;
	cout << mycompany->gettaxi(3)->trip(147) << endl;
	cout << mycompany->gettaxi(3)->trip(1147) << endl;

	cout << "\nPrint one out\n";
	// gettaxi is also NOT done so this will NOT get the right taxi!
	cout << mycompany->gettaxi(3)->tostring() << endl; 

	cout << "\nAssess taxes on one\n";
	// gettaxi is also NOT done so this will NOT get the right taxi!
	cout << mycompany->gettaxi(3)->taxreport() << endl; 

	cout << "\nPrint one out\n";
	// gettaxi is also NOT done so this will NOT get the right taxi!
	cout << mycompany->gettaxi(3)->tostring() << endl; 

	cout << "\n\nRemove some\n";
	// yes, yes, this will also not remove the right taxi because removetaxi is not done
	cout << mycompany->removetaxi(3) << endl;
	cout << mycompany->removetaxi(2) << endl;
	cout << mycompany->removetaxi(1) << endl;
	cout << mycompany->removetaxi(0) << endl;
	cout << mycompany->removetaxi(234) << endl;
	cout << mycompany->removetaxi(345) << endl;
	cout << mycompany->removetaxi(456) << endl;
	cout << mycompany->removetaxi(567) << endl;
	cout << mycompany->removetaxi(678) << endl;
	// ... although we will eventually not be able to remove any more

	cout << "\n\n...ending\n";
	system("pause");
	return 0;
}