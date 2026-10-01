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

Matrix Matrix::transpose()
{
	Matrix resultMatrix;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			resultMatrix.arr[j][i] = arr[i][j];
		}
	}
	return resultMatrix;
}

Matrix Matrix::add(Matrix mat2) 
{
	Matrix resultMatrix;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			resultMatrix.arr[i][j] = arr[i][j] + mat2.arr[i][j];
		}
	}
	return resultMatrix;
}

Matrix Matrix::multi(Matrix mat) 
{
	Matrix resultMatrix;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			int sum = 0;
			for	(int k = 0; k < SIZE;k++) 
			{
				sum += arr[i][k] * mat.arr[k][j];
			}
		resultMatrix.arr[i][j] = sum;
		}
	}
	return resultMatrix;
}