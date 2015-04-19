#pragma once
#include<iostream>
using namespace std;

class Time
{

private:
	int hours;
	int minutes;
public:
	Time(int , int );

	void set(int, int);
	void get(int &, int &);

	Time operator++(int);


	friend ostream& operator<<(ostream &os,Time &h);




	~Time();
};

