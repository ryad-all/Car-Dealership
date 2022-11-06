#include "UsedCar.h"

UsedCar::UsedCar() : NewCar()
{
	this->manifacturer = "NULL";
	this->milage = 0;
}
UsedCar::UsedCar(int a, int b, string c, int d, double e, string man, int mil) : NewCar(a,  b,  c,  d,  e) //question for TA
{
	this->manifacturer = man;
	this->milage = mil;
}
UsedCar::~UsedCar()
{
	cout << "Object of class UsedCar has been destroyed. " << endl;

}
void UsedCar::printUsed(UsedCar& x)
{
	cout << "The car " << x.getUniqueID() << " is  a used car from " << x.manifacturer << "  with a milage of " << x.milage << " of color "
		<< x.getColor() << ", a model year " << x.getModelYear() << ", " << x.getNumDoors() << " number of doors and costs "
		<< x.getPrice() << "$. " << endl;
}

UsedCar::UsedCar(const UsedCar& usedCarObj) : NewCar(usedCarObj.getUniqueID(), usedCarObj.getModelYear(), usedCarObj.getColor(), usedCarObj.getNumDoors(), usedCarObj.getPrice()) 
{
	manifacturer = usedCarObj.manifacturer;
	milage = usedCarObj.milage;
}

void UsedCar::setManifacturer(string x)
{
	manifacturer = x;
}
void UsedCar::setMilage(int x)
{
	milage = x;
}

string UsedCar::getManfacturer() const
{
	return manifacturer;
}
int UsedCar::getMilage() const
{
	return milage;
}