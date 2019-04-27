#include "Watch.h"

int Watch::gethr(){
	return this->hour;
}

int Watch::getmin(){
	return this->min;
}

int Watch::getsec(){
	return this->sec;
}

void Watch::setHour(int hr){
	this->hour = hr;
}

void Watch::setMin(int min){
	this->min = min;
}

void Watch::setSec(int sec){
	this->sec = sec;
}

Watch::Watch(){}

Watch::Watch(int hour, int min, int sec):
	hour(hour), min(min), sec(sec)
{}
