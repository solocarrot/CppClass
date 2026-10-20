#pragma once
#include <iostream>

const int SIZE = 128;

class CharArray
{
private:
	char charArray[SIZE];
	int index = 0;
public:
	void set(char, int);
	int getIndex() const;
	void upIndex();
	char getElement(int) const;

	CharArray chagneToLower() const;

};

std::istream& operator>>(std::istream& is, CharArray&);
std::ostream& operator<<(std::ostream& os, const CharArray&);
