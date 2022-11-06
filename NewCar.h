#pragma once
#include "Car.h"
class NewCar : public Car
{
private:
	int modelYear;
	string color;
	int numDoors;
	double price;
public:
	NewCar();
	NewCar(int, int, string, int, double);
	~NewCar();
	NewCar(const NewCar& objNewCar);

	int getModelYear() const;
	string getColor() const;
	int getNumDoors() const;
	double getPrice() const;

	void setModelYear(int);
	void setColor(string);
	void setNumDoors(int);
	void setPrice(double);
	void printNew(NewCar&);
};

