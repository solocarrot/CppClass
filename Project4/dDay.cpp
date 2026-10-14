#include <iostream>
#include "Day.h"

using namespace std;

Day::Day()
{
	year = 2026;
	month = 10;
	day = 01;

}

void Day::operator++(int)
{
	day +=1;
	setter();
}

void Day::operator--(int)
{
	day -=1;
	setter();
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
	bool isYoonyear; 
	isYoonyear = isYoon();
	if (day >= 1 && day <= 28)
	{
		return;
	}
	else if (day == 0) // 여기서 day가 -가 됐을떄는 생각안해도되려나
	{
		month--;
		if (month == 2 && isYoonyear == true) day += 29;
		else if (month == 2 && isYoonyear == false) day += 28;

		else if (month == 4 || month == 6 || month == 9 || month == 11) day += 30;
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) day += 31;
	}
}

bool Day::isYoon()
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0) return true;
			else return false;
		}
		else return true;
	}
	else return false;
}

void Day::changeDay(char enter[])
{
	if (enter[0] == 'y' || enter[0] == 'Y')
	{
		(*this)--;
	}
	else if (enter[0]  == 't' || enter[0] == 'T')
	{
		
		(*this)++;
	}
	else if (enter[0] == 'q' || enter[0] == 'Q')
	{
		cout << "quit" << endl;
	}
	else if (enter[0] - '0' >= 0 && enter[0] - '0' <= 9)
	{
		if (enter[9] != '/0')
		{
			cout << "error" << endl;
		}
		else
		{
			Day resultDay(char enter[]);
			
		}
	}
	else if (enter[0] == '+' || enter[0] == '-')
	{

	}
}

Day::Day(char enter[8])
{
	year = (enter[0] * 1000) + (enter[1] * 100) + (enter[2] + 10) + (enter[3]);
	month = (enter[4] * 10) + enter[5];
	day = enter[6] * 10 + enter[7];
}