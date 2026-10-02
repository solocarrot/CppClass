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
	if (num < 0 && denom > 0)
	{
		int gcd = getGcd(-1 * num, denom);
	}
	else if(num > 0 && denom < 0)
	{
		int gcd = getGcd(num, -1 * denom);
		num *= -1;
		denom *= -1;
	}
	//더하기 할때 안예뻐서 분모는 양수 분자는 음수로 만들어주기.
	else if (num < 0 && denom < 0) 
	{
	num *= -1;
	denom *= -1;
	getGcd(num, denom);
	}
	else { getGcd(num, denom); }

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
	//reduce();
}

//Fraction Fraction::add(Fraction fraction)
//{
//	Fraction resultFraction;
//	if (fraction.isPluss == false)
//	{
//		fraction.num *= -1;
//	}
//	if (isPluss == false) {
//		resultFraction.num = -1 * num * fraction.denom + fraction.num * denom;
//	}
//	else
//	{
//		resultFraction.num = num * fraction.denom + fraction.num * denom;
//	}
//	
//	resultFraction.num = num * fraction.denom + fraction.num * denom;
//	resultFraction.denom = denom * fraction.denom;
//
//	resultFraction.isPluss = resultFraction.isPlus();
//	resultFraction.reduce();
//
//	return resultFraction;
//}

void Fraction::print() const
{
	
		if (denom == 1)
		{
			cout <<num << endl;
		}
		else
		{
			cout << num << "/" << denom << endl;
		}
}


Fraction Fraction::operator+(const Fraction& fraction) const
{
	Fraction resultFraction;
	resultFraction.num = num * fraction.denom + fraction.num * denom;
	resultFraction.denom = denom * fraction.denom;

	resultFraction.reduce();
	return resultFraction;
	
}

//gcd 구할때 -를 양수로만들고 reduce를 양수상태로하고 분자로 -만들어주기...