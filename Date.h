#pragma once
#include <string>
#include <iostream>
using namespace std;

class Date
{
private:
	int month, day, year;
public:
	Date();
	Date(int, int, int);
	~Date();
	Date(const Date& dateCopy);
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	
	int getMonth();
	int getDay();
	int getYear();
 

};

