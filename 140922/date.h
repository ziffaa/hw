#pragma once
class date
{
	int year;
	int month;
	int day;
public:
	date();
	date(int, int, int);
	int getDay();
	int getYear();
	int getMonth();
	void setDate(int d, int m, int y);
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	void printDate();
	void inputDate();
	date operator++();
	date operator++(int);
	date operator--();
	date operator--(int);
	int operator+(int);
	int operator-(int);
	date operator+(date);
	date operator-(date);
	void operator+=(int);
	void operator-=(int);
	bool operator<(date);
	bool operator>(date);
	bool operator<=(date);
	bool operator>=(date);
	bool operator==(date);
	bool operator!=(date);
};