#pragma once
#include "Person.h"
class Client :
    public Person
{
private:
    string drivingLicence;
    string carType; //NewCar or UsedCar
public:
    Client();
    Client(string, Date*, string, string);
    ~Client();
    Client(const Client& clientObj);

    void setDrivingLicence(string);
    void setCarType(string);
    string getDrivingLicence() const;
    string getCarType() const;
    void print();

};

