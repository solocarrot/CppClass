#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction()
{
	num = 1;
	denom = 1;
	isPluss = true;
}

Fraction::Fraction(int num1, int denom1)
{
	num = num1;
	denom = denom1;

	if (denom == 0)
	{
		cout << "ERR" << endl;
		denom = 1;
	}
	isPluss = isPlus();
	reduce();
}

void Fraction::reduce()
{
	int gcd = getGcd(num,denom);

	num = num / gcd;
	denom = denom / gcd;
}

int Fraction::getGcd(int num2, int denom2)
{
	while (denom2 != 0)
	{
		int temp = num2 % denom2;
		num2 = denom2;
		denom2 = temp;
	}
	return num2;
}

void Fraction::set(int num2, int denom2)
{
	num = num2;
	denom = denom2;

	if (denom == 0)
	{
		cout << "ERR" << endl;
		denom = 1;
	}
	isPluss = isPlus();
}

Fraction Fraction::add(Fraction fraction)
{
	Fraction resultFraction;
	if (fraction.isPluss == false)
	{
		fraction.num *= -1;
	}
	if (isPluss == false) {
		resultFraction.num = -1 * num * fraction.denom + fraction.num * denom;
	}
	else
	{
		resultFraction.num = num * fraction.denom + fraction.num * denom;
	}
	
	resultFraction.num = num * fraction.denom + fraction.num * denom;
	resultFraction.denom = denom * fraction.denom;

	resultFraction.isPluss = resultFraction.isPlus();
	resultFraction.reduce();

	return resultFraction;
}

void Fraction::print() const
{
	if (isPluss == false)
	{
		if (denom == 1)
		{
			cout << "-" <<num << endl;
		}
		else
		{
			cout << "-" << num << "/" << denom << endl;
		}
	}
	else
	{
		if (denom == 1)
		{
			cout << num << endl;
		}
		else
		{
			cout << num << "/" << denom << endl;
		}
	}
}

bool Fraction::isPlus()
{
	if (num > 0 && denom < 0)
	{
		denom = denom * -1;
		return false;
	}
	else if (num < 0 && denom > 0)
	{
		num = num * -1;
		return false;
	}
	else
	{
		return true;
	}
}

Fraction operator+(Fraction& fraction) const
{
	
}