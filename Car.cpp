#include "Car.h"

Car::Car()
{
	uniqueID = 0;
}

Car::Car(int x)
{
	uniqueID = x;
}

Car::Car(const Car& carObj)
{
	uniqueID = carObj.uniqueID;
}

Car::~Car()
{
	cout << "The object of class Car has been destroyed. " << endl;
}

void Car::setUniqueID(int x)
{
	uniqueID = x;
}
int Car::getUniqueID() const
{
	return uniqueID;
}