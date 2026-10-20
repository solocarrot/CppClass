#include <iostream>
#include "StringApp.h"

using namespace std;

int main()
{
	CharArray arr;
	cin >> arr;
	int gap;
	cin >> gap;

	cout << endl;

	cout << arr << endl;
	CharArray lowerArr = arr.chagneToLower();
	cout << lowerArr << endl;

	LowerCase lower(arr.chagneToLower());
	lower.countLower();
	cout << lower;
}