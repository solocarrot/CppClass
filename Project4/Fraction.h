#pragma once
#include <iostream>

class Fraction
{
private:
	int num;
	int denom;
	int gcd;
public:
	//기본생성자랑 인자받는 생성자랑 set함수 직접적으로 Fraction의 private값 바꾸기때문에 계속 reduce() 넣어줘야하는부분들
	Fraction();
	Fraction(int, int);
	void set(int,int);
	//Fraction add(Fraction);

	// 최대공약수를 찾고 약분을하는 함수들 (마이너스처리에유의)
	void reduce();
	int getGcd(int,int);

	// print할때 내부값 변경하지않게 마지막에 const붙여주기
	void print() const;

	//+를 오버라이딩
	Fraction operator+(const Fraction&) const;

	//<<오버라이딩에서 friend없이 구현하기위해 getNum과 getDenom구현
	int getNum() const;
	int getDenom() const;
};

std::ostream& operator<<(std::ostream& os, const Fraction&);
