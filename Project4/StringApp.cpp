#include <iostream>
#include "StringApp.h"

using namespace std;

std::istream& operator>>(std::istream& is, CharArray& charArr)
{
	char c;
	while (true)
	{
		is >> c;
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

std::ostream& operator<<(std::ostream& os, CharArray& charArr)
{
	for (int i = 0; i < charArr.getIndex(); i++)
	{
		char nowPrint;
		nowPrint = charArr.get(i);
		os << nowPrint;
	}
	return os;
}

void CharArray::upIndex()
{
	index++;
}