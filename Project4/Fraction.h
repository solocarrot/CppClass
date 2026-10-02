#pragma once
class Fraction
{
private:
	int num;
	int denom;
	int gcd;
public:
	Fraction();
	Fraction(int, int);
	void set(int,int);
	Fraction add(Fraction);
	void print() const;
	void reduce();
	int getGcd(int,int);
	bool isPlus();

	Fraction operator+(const Fraction&) const;
};