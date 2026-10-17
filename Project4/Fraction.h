#pragma once
#include <iostream>

class Fraction
{
private:
	int num;
	int denom;
	int gcd = 1;
public:
	//생성자랑 set함수
	Fraction();
	Fraction(int, int);
	void set(int,int);

	// 최대공약수를 찾고 약분을하는 함수들 (마이너스처리에유의)
	int getGcd(int, int);
	void reduce();

	Fraction operator+(const Fraction&) const;

	//<<오버라이딩에서 friend없이 구현하기위해 getNum과 getDenom구현
	int getNum() const;
	int getDenom() const;
};

std::ostream& operator<<(std::ostream& os, const Fraction&);
