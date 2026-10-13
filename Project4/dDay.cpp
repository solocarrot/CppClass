#include <iostream>
#include "Day.h"

using namespace std;

Day::Day()
{
	year = 2026;
	month = 10;
	day = 01;

}

Day Day::operator++(int)
{
	Day resultDay;
	resultDay.year = year;
	resultDay.month = month;
	resultDay.day = day + 1;
	return resultDay;
}

Day Day::operator--(int)
{
	Day resultDay;
	resultDay.year = year;
	resultDay.month = month;
	resultDay.day = day - 1;
	return resultDay;
}

int Day::getDay() const
{
	return day;
}

int Day::getMonth() const
{
	return month;
}

int Day::getYear() const
{
	return year;
}

std::ostream& operator<<(std::ostream& os, const Day& day)
{
	os << day.getYear() << "/" << day.getMonth() << "/" << day.getDay() << endl;
	return os;
}

void Day::setter()
{
	if (day >= 1 && day <= 28)
	{
		
	}
}

