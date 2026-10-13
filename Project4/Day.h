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
	Day(int);

	int getYear() const;
	int getDay() const;
	int getMonth() const;

	void setter();
	Day operator++(int);
	Day operator--(int);

	bool isYoon();



};

std::ostream& operator<<(std::ostream& os, const Day&);
std::istream& operator>>(std::istream& is, Day&);