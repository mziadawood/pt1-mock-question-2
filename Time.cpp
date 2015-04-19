#include "Time.h"
#include<iostream>
using namespace std;



Time::Time(int h, int m)
{ 
	hours = h;
	minutes = m;
}

void Time::set(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::get(int &h, int &m)
{
	h = hours;
	m = minutes;
}

ostream &operator<<(ostream &os, Time &h)
{
	int hr = h.hours;
	int m = h.minutes;

	os << hr << ":" << m;

	return os;
}

Time Time::operator++(int)
{
	if (minutes<59)
	{
		minutes = minutes + 1;
	}

	if (minutes == 59)
	{
		minutes = 0;
		hours = hours + 1;
	}
	return *this;


}


Time::~Time()
{
}
