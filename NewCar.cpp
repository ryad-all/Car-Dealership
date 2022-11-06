#include "NewCar.h"

NewCar::NewCar() :Car()
{
	modelYear = 0;
	color = "NULL";
	numDoors = 0;
	price = 0;
}

NewCar::NewCar(int a, int b, string c, int d, double e) : Car(a)
{
	modelYear = b;
	color = c;
	numDoors = d;
	price = e;
}
void NewCar::printNew(NewCar& x)
{	
	cout << "the new " << modelYear << " car " << x.getUniqueID() << " has " << numDoors << " doors, its color is "<< color << ", and costs " << price << "$. " << endl;
}
NewCar::NewCar(const NewCar& newCarObj) : Car(newCarObj.getUniqueID())
{
	modelYear = newCarObj.modelYear;
	color = newCarObj.color;
	numDoors = newCarObj.numDoors;
	price = newCarObj.price;
}

NewCar::~NewCar() 
{
	cout << "The object of class NewCar has been destroyed. " << endl;
}

int NewCar::getModelYear() const
{
	return modelYear;
}
string NewCar::getColor() const
{
	return color;
}
int NewCar::getNumDoors() const
{
	return numDoors;
}
double NewCar::getPrice() const
{
	return price;
}

void NewCar::setModelYear(int x)
{
	modelYear = x;
}
void NewCar::setColor(string x) 
{
	color = x;
}
void NewCar::setNumDoors(int x) {
	numDoors = x;
}
void NewCar::setPrice(double x)
{
	price = x;
}