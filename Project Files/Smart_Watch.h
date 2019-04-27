#pragma once
#include "Watch.h"
#include "Date.h"
#include <string>

using std::string;

class Smart_watch : public Watch {
private:
	string notification;
	Date eventDate;
public:
	string getNotification();
	void setNotification(string);

	Date getEventDate();
	void setEventDate();

	void displayDaysBeforeEvent(Date *);

	Smart_watch(int, int, int, int, int, int, string);

};