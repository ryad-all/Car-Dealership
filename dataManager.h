#pragma once
#include "PurchaseContract.h"

class dataManager
{
private:
	NewCar* newCars[50];
	UsedCar* usedCars[200];
	SalesPerson* salesPerson[10];
	PurchaseContract* purchaseContract[100];
public:
	dataManager();
	~dataManager();

	bool insertSalesPerson(SalesPerson* x);
	bool insertNewCar(NewCar* x);
	bool insertUsedCar(UsedCar* x);
	bool insertPurchaseContract(PurchaseContract* x);
	bool checkAvailabilityNew(NewCar& x);
	bool checkAvailabilityUsed(UsedCar& x);
	void printAge(int x);
	void printMilage(int x);
};

