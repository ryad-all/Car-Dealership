#pragma once
#include "SalesPerson.h"
#include "Client.h"
#include "Car.h"
#include "NewCar.h"
#include "UsedCar.h"

class PurchaseContract
{
private:
	Client* client = new Client;
	SalesPerson* salesPerson = new SalesPerson;
	NewCar* newCar = new NewCar;
	UsedCar* usedCar = new UsedCar;
	Date* purchaseDate =  new Date;
public:
	PurchaseContract();
	PurchaseContract(Client*, SalesPerson*, NewCar*, Date*);
	PurchaseContract(Client*, SalesPerson*, UsedCar*, Date*);
	~PurchaseContract();
	PurchaseContract(const PurchaseContract& obj);

	void setClient(Client*);
	void setSalesPerson(SalesPerson*);
	void setNewCar(NewCar*);
	void setUsedCar(UsedCar*);
	void setPurchaseDate(Date*);

	string usedOrNew();
	Client* getClient();
	SalesPerson* getSalesPerson();
	NewCar* getNewCar();
	UsedCar* getUsedCar();
	Date getPurchaseDate();
	void print(PurchaseContract&);
};

