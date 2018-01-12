# taxiObjects
This example shows you how to use objects, inherit from other objects and manage a vector of objects.

If you were starting from scratch, you would start with Taxicompanyinterface.h which is an abstract class that holds Taxis and 
Taxiinterface.h which is an abstract class for all things that could be in a Taxicompany.

Taxicompany.h inherits from Taxicompanyinterface.h and declares the vector that will hold all of the taxis.  So Taxicompany isa Taxicompanyinterface and it hasa array of Taxiinterface
```
TaxicompanyInterface <- Taxicompany
```

Taxi.h inherits from Taxiinterface and includes data elements, along with virtual functions that can be overridden by child classes. Taxi isa Taxiinterface.
```
Taxiinterface <- Taxi
```

Motor.h inherits from Taxi.h and includes data elements that are specific to motorized vehicles. Motor isa Taxi and Motor isa Taxiinterface.  So it can be contained in the array of Taxiinterface that Taxicompany hasa
```
Taxiinterface <- Taxi <- Motor
```

Motorcycle.h inherits from Motor.h and specializes for motorcycles, but it still isa Taxi, so it isa Taxiinterface. So it can be contained in the array of Taxiinterface that Taxicompany hasa
```
Taxiinterface <- Taxi <- Motor <- Motorcycle
```

Human.h inherits from Taxi.h and includes behaviors associated with human powered vehicles.  But it still isa Taxi, so it isa Taxiinterface. So it can be contained in the array of Taxiinterface that Taxicompany hasa
```
Taxiinterface <- Taxi <- Human
```

Ped.h inherits from Human.h and included behaviors associated with a peddle bicycle.  It isa Human, but it still isa Taxi, so it isa Taxiinterface. So it can be contained in the array of Taxiinterface that Taxicompany hasa
```
Taxiinterface <- Taxi <- Human <- Ped
```

Make sure you understand the way inheritance works so that specialization in a subclass can use all of the data and behaviors of the inherited class.




