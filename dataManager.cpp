#include "dataManager.h"

dataManager::dataManager()
{
	for (int i = 0; i < 50; i++)
	{
		newCars[i] = nullptr;
	}
	for (int i = 0; i < 200; i++)
	{
		usedCars[i] = nullptr;
	}
	for (int i = 0; i < 10; i++)
	{
		salesPerson[i] = nullptr;
	}
	for (int i = 0; i < 100; i++)
	{
		purchaseContract[i] = nullptr;
	}
}

dataManager::~dataManager()
{

	cout << "Object of class dataManager has been destroyed. " << endl;
}


bool dataManager::insertSalesPerson(SalesPerson* x)
{
	for (int i = 0; i < 10; i++)
	{
		if (salesPerson[i] == nullptr)
		{
			salesPerson[i] = new SalesPerson(*x);
			return true;
		}

	}
	return false;
}

bool dataManager::insertNewCar(NewCar* x)
{
	for (int i = 0; i < 50; i++)
	{
		if (newCars[i] == nullptr)
		{
			newCars[i] = new NewCar(*x);
			return true;
		}
	}
	return false;
}

bool dataManager::insertUsedCar(UsedCar* x)
{
	for (int i = 0; i < 200; i++)
	{
		if (usedCars[i] == nullptr)
		{
			usedCars[i] = new UsedCar(*x);
			return true;
		}
	}
	return false;
}

bool dataManager::insertPurchaseContract(PurchaseContract* x)
{
	for (int i = 0; i < 10; i++)
	{
		if (purchaseContract[i] == nullptr)
		{
			purchaseContract[i] = new PurchaseContract(*x);
			if (purchaseContract[i]->usedOrNew() == "Used")
			{
				for (int j = 0; j <200; j++)
				{
					if (usedCars[j] != nullptr)
					{ 
						if (usedCars[j]->getUniqueID() == x->getUsedCar()->getUniqueID())
						{
							usedCars[j] = nullptr;
						}
					}
				}
			}
			if (purchaseContract[i]->usedOrNew() == "New")
			{
				for (int j = 0; j < 50; j++)
				{
					if (newCars[j] != nullptr)
					{
						if (newCars[j]->getUniqueID() == x->getNewCar()->getUniqueID())
						{
							newCars[j] = nullptr;
						}
					}
				}
			}

			return true;
		}
	}
	return false;
}

bool dataManager::checkAvailabilityNew(NewCar& x)
{
	for (int i = 0; i < 50; i++)
	{
		if (newCars[i] != nullptr)
		{
			if (newCars[i]->getUniqueID() == x.getUniqueID())
			{
				return true;
			}
		}
	}
	return false;
}

bool dataManager::checkAvailabilityUsed(UsedCar& x)
{
	for (int i = 0; i < 200; i++)
	{
		if (usedCars[i] != nullptr)
		{
			if (usedCars[i]->getUniqueID() == x.getUniqueID())
			{
				return true;
			}
		}
	}
	return false;
}

void dataManager::printAge(int x)
{
	int count = 0;
	for (int i = 0; i < 200; i++)
	{
		if (usedCars[i] != nullptr)
		{
			if ((2022 - usedCars[i]->getModelYear()) <= x)
			{
				cout << "-Car with unique ID " << usedCars[i]->getUniqueID() << " is under " << x << " years. " << endl;
				count++;
			}
		}
	}
	if (count == 0)
	{
		cout << "No available used car is under " << x << " years." << endl << endl;
	}
}

void dataManager::printMilage(int x)
{
	int count = 0;
	for (int i = 0; i < 200; i++)
	{
		if (usedCars[i] != nullptr)
		{
			if (usedCars[i]->getMilage() <= x)
			{
				cout << "-Car with unique ID " << usedCars[i]->getUniqueID() << " is under " << x << " miles. " << endl;
				count++;
			}
		}
	}
	if (count == 0)
	{
		cout << "No available used car is under " << x << " miles." << endl;
	}
}


