#include <iostream>
using namespace std;

bool readArray(int[], int, int); 
bool getMinMax(int[], int[], int, int& , int& );

int main() {
	const int SIZE = 5, ASCENDING = 1, DESCENDING = 2;
	int cnt, arr1[SIZE], arr2[SIZE], min = 0, max = 0;
	cin >> cnt;

	for (int i = 0; i < cnt; ++i) {
		for (int j = 0; j < SIZE; j++)
		{
			cin >> arr1[j];
		}
		if (readArray(arr1, SIZE, ASCENDING)) 
		{
			for (int k = 0; k < SIZE; k++)
			{
				cin >> arr2[k];
			}
			if (readArray(arr2, SIZE, DESCENDING))
				if (getMinMax(arr1, arr2, SIZE, min, max))
				{
					cout << "Min : " << min << ", Max : " << max << "\n";
					cout << "ALL SAME : " << min << "\n";
				}
		}
		else cout << "[Error] Unsorted input\n";
	}
	return 0;
}

bool readArray(int arr[], int SIZE, int trend)
{
	if (trend == 1)
	{
		for (int i = 1; i < SIZE; i++)
		{
			int smallValue = arr[0];
			if (smallValue > arr[i])
			{
				return 0;
			}
			else
			{
				smallValue = arr[i];
			}
		}
		return 1;
	}
	else if (trend == 2)
	{
		for (int i = 1; i < SIZE; i++)
		{
			int bigValue = arr[0];
			if (bigValue < arr[i])
			{
				return 0;
			}
			else
			{
				bigValue = arr[i];
			}
		}
		return 1;
	}
}

bool getMinMax(int arr1[], int arr2[], int SIZE, int& min , int& max)
{
	if (arr1[0] >= arr2[SIZE - 1])
	{
		min = arr2[SIZE - 1];
	}
	else
	{
		min = arr1[0];
	}

	if (arr1[SIZE - 1] >= arr2[0])
	{
		max = arr1[SIZE - 1];
	}
	else
	{
		max = arr2[0];
	}
	return 1;
}