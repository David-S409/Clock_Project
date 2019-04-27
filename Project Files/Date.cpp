#include "Date.h"

void createClassicWatch(Date today){}

int Date::getMonth() {
	return this->month;
}

int Date::getDay() {
	return this->day;
}

int Date::getYear() {
	return this->year;
}

void Date::setMonth(int month) {
	this->month = month;
}

void Date::setDay(int day) {
	this->day = day;
}

void Date::setYear(int year) {
	this->year = year;
}


Date::Date() {}

Date::Date(int month, int day, int year) :
	day(day), month(month), year(year)
{}