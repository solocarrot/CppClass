#include "Array.h"
#include <iostream>

using namespace std;

bool MyArray1::readAscSorted() 
{
	int small = arr[0];
	for (int i = 1; i < SIZE; i++) 
	{
		if (small > arr[i])
		{
			return false;
		}
		small = arr[i];
	}
	return true;
}



MyArray2 MyArray1::merge(MyArray1 arr2)
{
	MyArray2 resultArr;
	for (int i = 0, j = 0; (i + j) < SIZE * 2; )
	{
		while (i < SIZE && j < SIZE)
		{
			if (arr[i] >= arr2.arr[j])
			{
				resultArr.resultArr[i + j] = arr2.arr[j];
				j++;
			}
			if (arr[i] < arr2.arr[j])
			{
				resultArr.resultArr[i + j] = i;
				i++;
			}
		}
		if (i == SIZE && j != SIZE)
		{
			resultArr.resultArr[i + j] = arr2.arr[j];
			j++;
		}
		else if (j == SIZE && i != SIZE)
		{
			resultArr.resultArr[i + j] = arr[i];
			i++;
		}
	}
	return resultArr;
}