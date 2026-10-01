#include <iostream>
#include "Matrix.h"

using namespace std;

void Matrix::read()
{
	for (int i = 0; i < SIZE; i++)
	{
		int nowWidth = 0;
		for (int j = 0; j < SIZE;j++)
		{
			cin >> arr[i][j];
			nowWidth = getWidth(j,nowWidth);
		}
		if (nowWidth > resultWidth)
		{
			resultWidth = nowWidth;
		}
	}
}

int Matrix::getWidth(int j , int nowWidth)
{
	if (isPlus(j) == false) { nowWidth++; }
	while (j != 0) 
	{
		nowWidth++;
		j /= 10;
	}
	return nowWidth;
}

bool Matrix::isPlus(int j)
{
	if (j * -1 > 0)
	{
		return false;
	}
	else 
	{
		return true;
	}
}

void Matrix::print() const
{
	for (int i = 0; i < SIZE;i++)
	{
		cout << "|" << " ";
		for (int j = 0; j < SIZE; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "|" << endl;
	}
}

int[][] transpose(int arr[][SIZE], int resultArr[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			resultArr[j][i] = arr[i][j];
		}
	}
}