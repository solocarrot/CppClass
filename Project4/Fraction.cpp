#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction()
{
	num = 1;
	denom = 1;
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
	reduce();
}

void Fraction::reduce()
{
	//분자가 음수일때 양수로 바꾸고 최대공약수구하기
	if (num < 0 && denom > 0)
	{
		gcd = getGcd(-1 * num, denom);
	}
	//분모가 음수일때 양수로 바꾸고 최대공약수구하기
	else if(num > 0 && denom < 0)
	{
		gcd = getGcd(num, -1 * denom);
		num *= -1;
		denom *= -1;
	}
	else if (num < 0 && denom < 0) 
	{
	num *= -1;
	denom *= -1;
	gcd = getGcd(num, denom);
	}
	else { gcd = getGcd(num, denom); }
	//약분
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
	reduce();
}


Fraction Fraction::operator+(const Fraction& fraction) const
{
	Fraction resultFraction;
	resultFraction.num = num * fraction.denom + fraction.num * denom;
	resultFraction.denom = denom * fraction.denom;

	resultFraction.reduce();
	return resultFraction;
	
}

int Fraction::getNum() const
{
	return num;
}

int Fraction::getDenom() const
{
	return denom;
}

std::ostream& operator<<(std::ostream& os, const Fraction& fraction)
{
	int num = fraction.getNum();
	int denom = fraction.getDenom();

	os << num << "/" << denom;
	return os;
}