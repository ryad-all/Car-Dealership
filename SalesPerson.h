#pragma once
#include "Person.h"
class SalesPerson : public Person
{
private: 
	string dateOfHire;
	double salary;
public:
	SalesPerson();
	SalesPerson(string, Date*, string, double);
	~SalesPerson();
	SalesPerson(const SalesPerson& salesPersonObj);

	void setDateOfHire(string);
	void setSalary(double);
	void print(SalesPerson&);

	string getDateOfHire() const;
	double getSalary() const;
};

