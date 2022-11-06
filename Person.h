#pragma once
#include "Date.h"

class Person
{
private:
	string name;
	Date* dateOfBirth = new Date;
public:
	Person();
	Person(string, Date*);
	Person(string, Date);
	Person(const Person& obj);
	~Person();

	void setName(string);
	void setDateOfBirth(Date*);

	string getName() const;
	Date* getDateOfBirth() const;

};

