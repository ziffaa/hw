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
date operator++(date& dt)
{
	dt.setDay(dt.getDay() + 1);
	return date();
}
date operator++(date& dt, int)
{
	date temp = dt;
	dt.setDay(dt.getDay() + 1);
	return temp;
}
date operator--(date& dt)
{
	dt.setDay(dt.getDay() - 1);
	return date();
}
date operator--(date& dt, int)
{
	date temp = dt;
	dt.setDay(dt.getDay() - 1);
	return temp;
}
int operator+(int x, date dt)
{
	return dt.getDay() + x;
}
int operator-(int x, date dt)
{
	return dt.getDay() - x;
}
date operator+(date dt, date dt2)
{
	date temp = dt;
	temp.setDay(dt.getDay() + dt2.getDay());
	temp.setMonth(dt.getMonth() + dt2.getMonth());
	temp.setYear(dt.getYear() + dt2.getYear());
	return temp;
}
date operator-(date dt, date dt2)
{
	date temp = dt;
	temp.setDay(dt.getDay() - dt2.getDay());
	temp.setMonth(dt.getMonth() - dt2.getMonth());
	temp.setYear(dt.getYear() - dt2.getYear());
	return temp;
}
void operator+=(date& dt, int x)
{
	dt.setDay(dt.getDay() + x);
}
void operator-=(date& dt, int x)
{
	dt.setDay(dt.getDay() - x);
}
bool operator<(date d, date dt)
{
	if (d.getYear() != dt.getYear())
	{
		return (d.getYear() < dt.getYear()) ? true : false;
	}
	else
	{
		if (d.getMonth() != dt.getMonth())
		{
			return (d.getMonth() < dt.getMonth()) ? true : false;
		}
		else
		{
			return (d.getDay() < dt.getDay()) ? true : false;
		}
	}
}
bool operator>(date d, date dt)
{
	if (d.getYear() != dt.getYear())
	{
		return (d.getYear() > dt.getYear()) ? true : false;
	}
	else
	{
		if (d.getMonth() != dt.getMonth())
		{
			return (d.getMonth() > dt.getMonth()) ? true : false;
		}
		else
		{
			return (d.getDay() > dt.getDay()) ? true : false;
		}
	}
}
bool operator>=(date d, date dt)
{
	if (d.getYear() == dt.getYear() && d.getMonth() == dt.getMonth() && d.getDay() == dt.getDay())
	{
		return true;
	}
	if (d.getYear() != dt.getYear())
	{
		return (d.getYear() > dt.getYear()) ? true : false;
	}
	else
	{
		if (d.getMonth() != dt.getMonth())
		{
			return (d.getMonth() > dt.getMonth()) ? true : false;
		}
		else
		{
			return (d.getDay() > dt.getDay()) ? true : false;
		}
	}
}
bool operator<=(date d, date dt)
{
	if (d.getYear() == dt.getYear() && d.getMonth() == dt.getMonth() && d.getDay() == dt.getDay())
	{
		return true;
	}
	if (d.getYear() != dt.getYear())
	{
		return (d.getYear() < dt.getYear()) ? true : false;
	}
	else
	{
		if (d.getMonth() != dt.getMonth())
		{
			return (d.getMonth() < dt.getMonth()) ? true : false;
		}
		else
		{
			return (d.getDay() < dt.getDay()) ? true : false;
		}
	}
}
bool operator==(date d, date dt)
{
	if (d.getYear() == dt.getYear() && d.getMonth() == dt.getMonth() && d.getDay() == dt.getDay())
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator!=(date d, date dt)
{
	if (d.getYear() == dt.getYear() && d.getMonth() == dt.getMonth() && d.getDay() == dt.getDay())
	{
		return false;
	}
	else
	{
		return true;
	}
}