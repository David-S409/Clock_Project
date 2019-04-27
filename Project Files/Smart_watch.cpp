#include "Smart_Watch.h"
#include <iostream>
#include <stdio.h>

using namespace std;

const int dayInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

string Smart_watch::getNotification(){
	return this->notification;
}

void Smart_watch::setNotification(string notif){
	this->notification = notif;
}

Date Smart_watch::getEventDate() {
	return this->eventDate;
}

void Smart_watch::setEventDate(){}

void Smart_watch::displayDaysBeforeEvent(Date * today){
	int e_monthNumber = this->eventDate.getMonth(), t_monthNumber = today->getMonth();

	int eventDay = this->eventDate.getYear() * 365 + this->eventDate.getDay();;
	for (int i = 0; i < e_monthNumber - 1; i++)
		eventDay += dayInMonth[i];

	int todayDay = today->getYear() * 365 + today->getDay();
	for (int i = 0; i < t_monthNumber - 1; i++)
		todayDay += dayInMonth[i];
	
	cout << "Days until: " << this->getNotification() << " is " << (eventDay - todayDay) << " days.";
}


Smart_watch::Smart_watch(int e_month, int e_day , int e_year, int e_hour, int e_min, int e_sec, string e_name):
	notification(e_name)
{
	this->eventDate = Date(e_day, e_month, e_year);
}