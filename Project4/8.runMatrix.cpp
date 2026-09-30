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
	}
}

void Matrix::getWidth(int j , int nowwidth)
{
	
}