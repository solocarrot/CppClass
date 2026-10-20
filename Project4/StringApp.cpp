#include <iostream>
#include "StringApp.h"

using namespace std;

std::istream& operator>>(std::istream& is, CharArray& charArr)
{
	char c;
	while (true)
	{
		is.get(c);
		if (c == '.') break;
		else
		{
			charArr.set(c, charArr.getIndex());
			charArr.upIndex();
		}
	}
	return is;	
}

void CharArray::set(char c, int index)
{
	charArray[index] = c;
}

std::ostream& operator<<(std::ostream& os, const CharArray& charArr)
{
	for (int i = 0; i < charArr.getIndex(); i++)
	{
		char nowPrint;
		nowPrint = charArr.getElement(i);
		os << nowPrint;
	}
	return os;
}

void CharArray::upIndex()
{
	if (index < 128) index++;
	else cout << "error" << endl;
}

char CharArray::getElement(int i) const
{
	return charArray[i];
}

int CharArray::getIndex() const
{
	return index;
}

CharArray CharArray::chagneToLower() const
{
	CharArray resultArray;
	for (int i = 0; i < getIndex(); i++)
	{
		if (charArray[i] >= 'A' && charArray[i] <= 'Z')
		{
			resultArray.set(charArray[i] - ('A' - 'a'), resultArray.getIndex());
			//resultArray.upIndex();
		}
		else //(charArray[i] - 'a' >= 0 && charArray[i] - 'z' <= 23)
		{
			resultArray.set(charArray[i], resultArray.getIndex());
			//resultArray.upIndex();
		}
		resultArray.upIndex();
	}
	return resultArray;
}