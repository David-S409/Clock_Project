#pragma once

class Date {
private :
	int month, day, year;
public:
	int getMonth(), getDay(), getYear();
	void setMonth(int), setDay(int), setYear(int);

	Date();
	Date(int, int, int);
	friend void createClassicWatch(Date today);
};