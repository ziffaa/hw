#include <iostream>
#include "date.h"

using namespace std;

date::date()
{
	year = 0;
	month = 0;
	year = 0;
}
date::date(int d, int m, int y)
{
	year = y;
	month = m;
	day = d;
}
void date::setDate(int d, int m, int y)
{
	year = y;
	month = m;
	day = d;
}
void date::setDay(int d)
{
	day = d;
}
void date::setMonth(int m)
{
	month = m;
}
void date::setYear(int y)
{
	year = y;
}
int date::getDay()
{
	return day;
}
int date::getYear()
{
	return year;
}
int date::getMonth()
{
	return month;
}
void date::printDate()
{
	cout << day << '.' << month << '.' << year;
}
void date::inputDate()
{
	cout << "Enter day: ";
	cin >> day;
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter year: ";
	cin >> year;
}
date date::operator++()
{
	day++;
	return date();
}
date date::operator++(int)
{
	date temp = *this;
	day++;
	return temp;
}
date date::operator--()
{
	day--;
	return date();
}
date date::operator--(int)
{
	date temp = *this;
	day--;
	return temp;
}
int date::operator+(int x)
{
	return day + x;
}
int date::operator-(int x)
{
	return day - x;
}
date date::operator+(date dt)
{
	date temp = *this;
	temp.day += dt.day;
	temp.month += dt.month;
	temp.year += dt.year;
	return temp;
}
date date::operator-(date dt)
{
	date temp = *this;
	temp.day -= dt.day;
	temp.month -= dt.month;
	temp.year -= dt.year;
	return temp;
}
void date::operator+=(int x)
{
	day += x;
}
void date::operator-=(int x)
{
	day -= x;
}
bool date::operator<(date dt)
{
	if (year != dt.year)
	{
		return (year < dt.year) ? true : false;
	}
	else
	{
		if (month != dt.month)
		{
			return (month < dt.month) ? true : false;
		}
		else
		{
			return (day < dt.day) ? true : false;
		}
	}
}
bool date::operator>(date dt)
{
	if (year != dt.year)
	{
		return (year > dt.year) ? true : false;
	}
	else
	{
		if (month != dt.month)
		{
			return (month > dt.month) ? true : false;
		}
		else
		{
			return (day > dt.day) ? true : false;
		}
	}
}
bool date::operator>=(date dt)
{
	if (year == dt.year && month == dt.month && day == dt.day);
	{
		return true;
	}
	if (year != dt.year)
	{
		return (year > dt.year) ? true : false;
	}
	else
	{
		if (month != dt.month)
		{
			return (month > dt.month) ? true : false;
		}
		else
		{
			return (day > dt.day) ? true : false;
		}
	}
}
bool date::operator<=(date dt)
{
	if (year == dt.year && month == dt.month && day == dt.day);
	{
		return true;
	}
	if (year != dt.year)
	{
		return (year < dt.year) ? true : false;
	}
	else
	{
		if (month != dt.month)
		{
			return (month < dt.month) ? true : false;
		}
		else
		{
			return (day < dt.day) ? true : false;
		}
	}
}
bool date::operator==(date dt)
{
	if (year == dt.year && month == dt.month && day == dt.day)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool date::operator!=(date dt)
{
	if (year == dt.year && month == dt.month && day == dt.day)
	{
		return false;
	}
	else
	{
		return true;
	}
}