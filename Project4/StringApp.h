#pragma once
#include <iostream>

const int SIZE = 128;

class CharArray
{
private:
	char charArray[SIZE];
	int index = 0;
	int gap;
public:
	void set(char, int);
	int getIndex() const;
	void upIndex();
	char getElement(int) const;

	CharArray chagneToLower() const;

	CharArray moveToGap(int) const;
};

std::istream& operator>>(std::istream& is, CharArray&);
std::ostream& operator<<(std::ostream& os, const CharArray&);

class LowerCase
{
private:
	int intArray[26] = { 0 };
	CharArray lowerArray;
public:
	LowerCase(const CharArray& charArr) : lowerArray(charArr) {};
	void countLower();
	int getInt(int) const;
};

std::ostream& operator<<(std::ostream& os, const LowerCase&);