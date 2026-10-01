#include <iostream>
#include "Matrix.h"

using namespace std;

void Matrix::read()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE;j++)
		{
			cin >> arr[i][j];
		}
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

void Matrix::getMaxWidth()
{
	for (int i = 0; i < SIZE;i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			int nowWidth = 0;
			if (arr[i][j] == 0) { nowWidth = 1; continue; }
			//음수일때 길이추가
			if (arr[i][j] * -1 > 0)
			{
				nowWidth++;
			}
			int temp = arr[i][j];
			while (temp != 0)
			{
				temp = temp / 10;
				nowWidth++;
			}
			if (nowWidth > maxWidth)
			{
				maxWidth = nowWidth;
			}

		}
	}
}

void Matrix::print()
{
	getMaxWidth();
	for (int i = 0; i < SIZE;i++)
	{
		cout << "|" << " ";
		for (int j = 0; j < SIZE; j++)
		{
			printf("%*d", maxWidth, arr[i][j]);
			cout << " ";
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