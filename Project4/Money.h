#pragma once
#include <iostream>

class Money
{
private:
	int dollar;
	int cent;
public:
	Money operator+(const Money&) const;
	Money operator-(const Money&) const;
	void setter(int, int);
	void centToDollar();
	int getDollar() const;
	int getCent() const;
	bool operator==(const Money&) const;
	bool operator>=(const Money&) const;
	bool operator<=(const Money&) const;
	bool operator>(const Money&) const;
	bool operator<(const Money&) const;


};

std::istream& operator>>(std::istream& is, Money&);
std::ostream& operator<<(std::ostream& os, const Money&);