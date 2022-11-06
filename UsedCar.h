#pragma once
#include "NewCar.h"
class UsedCar :public NewCar
{
private:
    string manifacturer;
    int milage;
public:
    UsedCar();
    UsedCar(int a, int b, string c, int d, double e,string, int);
    ~UsedCar();
    UsedCar(const UsedCar& usedCarObj);

    void setManifacturer(string);
    void setMilage(int);
    void printUsed(UsedCar&);

    string getManfacturer() const;
    int getMilage() const;
};

