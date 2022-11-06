#include "Date.h"

Date::Date()
{
	month = 0;
	year = 0;
	day = 0;
}
Date::~Date()
{
	cout << "Object of class Date has been destroyed. " << endl;
}
Date::Date(int day1, int month1, int year1)
{
	day = day1;
	month = month1;
	year = year1;
}
Date::Date(const Date& dateCopy)
{
	day = dateCopy.day;
	month = dateCopy.month;
	year = dateCopy.year;
}
void Date::setDay(int x)
{
	day = x;
}
void Date::setMonth(int x)
{
	month = x;
}
void Date::setYear(int x)
{
	year = x;
}

int Date::getDay() 
{
	return day;
}
int Date::getMonth() 
{
	return month;
}
int Date::getYear() 
{
	return year;
}
