#include "Array.h"
#include <iostream>

using namespace std;

bool Array1::readAscSorted() 
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

Array2 Array1::merge(Array1 arr2)
{
	Array2 resultArr;
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
			resultArr.resultArr[i + j] = arr2[j];
			j++;
		}
		else if (j == SIZE && i != SIZE)
		{
			resultArr.resultArr[i + j] = arr[i];
			i++;
		}
	}
}