#include "SalesPerson.h"

SalesPerson::SalesPerson()
{
	this->dateOfHire = "NULL";
	this->salary = 0;
}
SalesPerson::SalesPerson(string name1, Date* date1, string x, double y):Person(name1, date1)
{
	this->dateOfHire = x;
	this->salary = y;
}
void SalesPerson::print(SalesPerson& x)
{
	cout << x.getName() << " is a sales person born on " << x.getDateOfBirth()->getDay() << "/" << x.getDateOfBirth()->getMonth()
		<< "/" << x.getDateOfBirth()->getYear() << " was hired in " << dateOfHire << " with a current salary of " << salary << "$. " << endl;
	
}
SalesPerson::~SalesPerson()
{
	cout << "Objet of class SalesPerson has been destroyed. " << endl;
}

SalesPerson::SalesPerson(const SalesPerson& salesPersonObj) : Person(salesPersonObj.getName() ,salesPersonObj.getDateOfBirth())
{
	
	dateOfHire = salesPersonObj.dateOfHire;
	salary = salesPersonObj.salary;
}

void SalesPerson::setDateOfHire(string x)
{
	this->dateOfHire = x;
}
void SalesPerson:: setSalary(double x)
{
	this->salary = x;
}

string SalesPerson::getDateOfHire() const
{
	return dateOfHire;
}
double SalesPerson::getSalary() const
{
	return salary;
}