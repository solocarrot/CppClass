#include <iostream>
#include "Money.h"

using namespace std;

void Money::setter(int dollar1, int cent1)
{
	dollar = dollar1;
	cent = cent1;
	centToDollar();
}

std::istream& operator>>(std::istream& is, Money& money)
{
	int dollar, cent;
	is >> dollar >> cent;
	
	money.setter(dollar, cent);
	return is;
}

void Money::centToDollar()
{
	if (cent > 100)
	{
		while (cent > 100)
		{
			dollar++;
			cent -= 100;
		}
	}
	else if (cent < 0)
	{
		dollar--;
		cent += 100;
	}
}
int Money::getCent() const
{
	return cent;
}
int Money::getDollar() const
{
	return dollar;
}
std::ostream& operator<<(std::ostream& os, const Money& money)
{
	os << "$" << money.getDollar() << "." << money.getCent();
	return os;
}

Money Money::operator+(const Money& money)
{
	Money resultMoney;
	dollar += money.getDollar();
	cent += money.getCent();

	resultMoney.setter(dollar, cent);
	return resultMoney;
}

Money Money::operator-(const Money& money)
{
	Money resultMoney;
	dollar -= money.getDollar();
	cent -= money.getCent();

	resultMoney.setter(dollar, cent);
	return resultMoney;
}

bool Money::operator==(const Money& money) const
{
	if (dollar == money.getDollar() && cent == money.getCent()) return true;
	else return false;
}