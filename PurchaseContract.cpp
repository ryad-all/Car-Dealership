#include "PurchaseContract.h"


PurchaseContract::PurchaseContract()
{
	client = nullptr;
	salesPerson = nullptr;
	newCar = nullptr;
	usedCar = nullptr ;
	purchaseDate = nullptr;
}

PurchaseContract::~PurchaseContract()
{
	delete client ;
	delete salesPerson;
	delete newCar ;
	delete usedCar ;
	delete purchaseDate ;
	cout << "Object of class Purchase Contract has been destroyed. " << endl;
}
PurchaseContract::PurchaseContract(const PurchaseContract& obj)
{
		client = new Client(*obj.client);
		salesPerson = new SalesPerson(*obj.salesPerson);
		purchaseDate = new Date(*obj.purchaseDate);
		if (obj.newCar == nullptr)
		{
			usedCar = new UsedCar(*obj.usedCar);
			newCar = nullptr;
		}
		else {
			newCar = new NewCar(*obj.newCar);
			usedCar = nullptr;
		}
		
}
PurchaseContract::PurchaseContract(Client* a, SalesPerson* b, NewCar* c, Date* e)
{
		client = new Client(*a);
		salesPerson = new SalesPerson(*b);
		newCar = new NewCar(*c);
		purchaseDate = new Date(*e);
		usedCar = nullptr;
}
PurchaseContract::PurchaseContract(Client* a, SalesPerson* b, UsedCar* x, Date* e)
{
		client = new Client(*a);
		salesPerson = new SalesPerson(*b);
		usedCar = new UsedCar(*x);
		purchaseDate = new Date(*e);
		newCar = nullptr;
}



void PurchaseContract::setClient(Client* a)
{
	client = new Client(*a);
}
void PurchaseContract::setSalesPerson(SalesPerson* b)
{
	salesPerson = new SalesPerson(*b);
}
void PurchaseContract::setNewCar(NewCar* c)
{
	newCar = new NewCar(*c);
	usedCar = nullptr;
}
void PurchaseContract::setUsedCar(UsedCar* d)
{
	usedCar = new UsedCar(*d);
	newCar = nullptr;
}
void PurchaseContract::setPurchaseDate(Date* e)
{
	purchaseDate = new Date(*e);
}

Client* PurchaseContract::getClient()
{
	return client;
}
SalesPerson* PurchaseContract::getSalesPerson()
{
	return salesPerson;
}
NewCar* PurchaseContract::getNewCar() {
	return newCar;
}
UsedCar* PurchaseContract::getUsedCar()
{
	return usedCar;
}
string PurchaseContract::usedOrNew()
{
	if (this->usedCar == nullptr)
	{
		return "New";
	}
	if (this->newCar == nullptr)
	{
		return "Used";
	}
}
void PurchaseContract::print(PurchaseContract& x)
{
	cout << "Infos about the contract : " << endl;
	cout << "************************" << endl;
	cout << "-client's info : ";
	client->print();
	cout << "-sales person's info : ";
	salesPerson->print(*salesPerson);
	if (x.usedOrNew() == "Used")
	{
		cout << "-Used Car's info : ";
		usedCar->printUsed(*usedCar);
	}
	else {
		cout << "-New car's info : ";
		newCar->printNew(*newCar);
	}
	cout << "-Purchased on " << x.getPurchaseDate().getDay() << "/" << x.getPurchaseDate().getMonth() << "/"
		<< x.getPurchaseDate().getYear() << ". " << endl;
}
Date PurchaseContract::getPurchaseDate()
{
	return *purchaseDate;
}