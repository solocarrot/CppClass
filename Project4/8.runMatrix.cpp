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
			getWidth(j,nowWidth);
		}
		if (nowWidth > resultWidth)
		{
			resultWidth = nowWidth;
		}
	}
}

void Matrix::getWidth(int j , int nowWidth)
{
	if (isPlus == false) { nowWidth++; }
	while (j != 0) {
		nowWidth++;
		j /= 10;
	}
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
	
}