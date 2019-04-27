#include "Date.h"
#include "Watch.h"
#include "Smart_Watch.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Date createToday();
void createClassicWatch(Date *today);
void manageCustomEvent(Date *today);

Date createToday();
void createClassicWatch(Date *today);
void manageCustomEvent(Date *today);

int main() {

	Date today = createToday();
	createClassicWatch(&today);
	manageCustomEvent(&today);

}

Date createToday()
{
	//create today's date object
	cout << "Enter todays date: " << endl;
	int day, month, year;
	cin >> day >> month >> year;
	Date today(day, month, year);
	return today;
}

//create watch object
void createClassicWatch(Date *today) {
	cout << "Enter current time: " << endl;
	int hour, min, sec;
	cin >> hour >> min >> sec;

	Watch rolex(hour, min, sec);

	cout << "----------------------------------------" << endl;
	cout << "Classic watch display screen" << endl;

	cout << "Today date: " << today->getDay() << "/" << today->getMonth() << "/" << today->getYear() << endl;
	cout << "Current time: " << setfill('0') << setw(2) << rolex.gethr() << ":" << setfill('0') << setw(2) << rolex.getmin() << ":" << setfill('0') << setw(2) << rolex.getsec() << endl;
	cin.ignore();
	cin.clear();
}

//create smart watch object
void manageCustomEvent(Date *today) {
	cout << "----------------------------------------" << endl;
	cout << "Enter event name " << endl;
	string event_name = "";
	getline(cin, event_name);//user enters Final exam
	cin.clear();
	cout << "Enter event date" << endl;
	//declare all variables needed for smart watch object
	int event_day = 0, event_month = 0, event_year = 0, event_hour = 0, event_min = 0, event_sec = 0;
	cin >> event_month >> event_day >> event_year; //user enters exam date 5 11 2019
	cout << "Enter event time" << endl;
	cin >> event_hour >> event_min >> event_sec;  //user enters exam time 8 00 00 2019

	Smart_watch applewatch(event_day, event_month, event_year, event_hour, event_min, event_sec, event_name);
	applewatch.displayDaysBeforeEvent(today);
}