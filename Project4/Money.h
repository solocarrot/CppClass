#pragma once
#include <iostream>

class Money
{
private:
	int dollar;
	int cent;
public:
	Money operator+(const Money&);
	Money operator-(const Money&);
	void setter(int, int);
	void centToDollar();
	int getDollar() const;
	int getCent() const;
	bool operator==(const Money&) const;


};

std::istream& operator>>(std::istream& is, Money&);
std::ostream& operator<<(std::ostream& os, const Money&);