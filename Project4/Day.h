#pragma once
#include <iostream>

using namespace std;

class Day
{
private:
	int year;
	int month;
	int day;
	

public:
	Day();
	Day(char[8]);

	int getYear() const;
	int getDay() const;
	int getMonth() const;

	void setter();
	void operator++(int);
	void operator--(int);

	bool isYoon();

	void changeDay(char[]);

		


};

std::ostream& operator<<(std::ostream& os, const Day&);
std::istream& operator>>(std::istream& is, Day&);