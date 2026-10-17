#pragma once
#include <iostream>

using namespace std;

const int SIZE = 9;

class Day
{
private:
	int year;
	int month;
	int day;

	char charArr[SIZE];
	
public:
	Day();

	int getYear() const;
	int getDay() const;
	int getMonth() const;

	void set(char[9]);
	void setter();
	void operator++(int);
	void operator--(int);

	bool isYoon();

	void checkArrFirst(char[]);

		


};

std::ostream& operator<<(std::ostream& os, const Day&);
std::istream& operator>>(std::istream& is, Day&);

class DDay
{
private:
	int howMuch;
	Day nowDay;
public:
	DDay(Day day) : nowDay(day) {}
	void set(int);
};