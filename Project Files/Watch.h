#pragma once

class Watch {
private:
	int hour, min, sec;
public:
	int gethr(), getmin(), getsec();
	void setHour(int), setMin(int), setSec(int);

	Watch();
	Watch(int, int, int);
};