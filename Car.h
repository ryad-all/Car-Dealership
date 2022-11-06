#pragma once
#include "Date.h"

class Car
{
private:
	int uniqueID;

public:
	Car();
	Car(int);
	~Car();
	Car(const Car& carObj);

	void setUniqueID(int);
	int getUniqueID() const;

};

