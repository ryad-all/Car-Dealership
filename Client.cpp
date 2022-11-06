#include "Client.h"

Client::Client() :Person()
{
	drivingLicence = "NULL";
	carType = "NULL";
}
void Client::print()
{
	cout << this->getName() <<" (" << this->drivingLicence << ") has the car type " << this->carType << ". " << endl;
}
Client::Client(string name1, Date* ptr, string x, string y) : Person(name1, ptr)
{
	drivingLicence = x;
	carType = y;
}
Client::~Client()
{
	cout << "Object of class Client has been destroyed. " << endl;
}

Client::Client(const Client& clientObj) :Person(clientObj.getName(), clientObj.getDateOfBirth())
{
	drivingLicence = clientObj.drivingLicence;
	carType = clientObj.carType;
}

void Client::setDrivingLicence(string str)
{
	drivingLicence = str;
}
void Client::setCarType(string str)
{
	carType = str;
}
string Client::getDrivingLicence() const
{
	return drivingLicence;
}
string Client::getCarType() const
{
	return carType;
}