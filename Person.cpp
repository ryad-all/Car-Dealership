#include "Person.h"

Person::Person()
{
	name = "NUll";
	dateOfBirth = nullptr;
}
Person::Person(string nam, Date* x)
{
	name = nam;
	dateOfBirth = new Date(*x);
}
Person::Person(string nam, Date x)
{
	name = nam;
	dateOfBirth = new Date(x);
}

Person::~Person()
{
	delete dateOfBirth;
	cout << "Object of class Person has been destroyed. " << endl;
}
Person::Person(const Person& obj)
{
	name = obj.getName();
	dateOfBirth->setDay(obj.getDateOfBirth()->getDay());
	dateOfBirth->setMonth(obj.getDateOfBirth()->getMonth());
	dateOfBirth->setYear(obj.getDateOfBirth()->getYear());
}
void Person::setDateOfBirth(Date* x)
{
	dateOfBirth->setDay(x->getDay());
	dateOfBirth->setMonth(x->getMonth());
	dateOfBirth->setYear(x->getYear());
}

void Person::setName(string nam)
{
	name = nam;
}

Date* Person::getDateOfBirth() const
{
	return dateOfBirth;
}

string Person::getName() const
{
	return name;
}