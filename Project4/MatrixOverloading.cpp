#include <iostream>
#include "Matrix.h"

using namespace std;

void Matrix::set(int i, int j, int element)
{
	arr[i][j] = element;
}


int Matrix::get(int i, int j) const
{
	return arr[i][j];
}

std::ostream& operator<<(std::ostream& os, const Matrix& matrix)
{
	int maxLength;
	maxLength = matrix.getMaxLength();
	for (int i = 0; i < SIZE; i++)
	{
		os << "|";
		for (int j = 0; j < SIZE; j++)
		{
			os << " ";

			int nowNum = matrix.get(i, j);
			for (int k = 0; k < (maxLength - matrix.getLength(nowNum)); k++)
			{
				os << " ";
			}
			os << nowNum;
		}
		os << " " << "|" << endl;
	}
	return os;
}

int Matrix::getLength(int num) const
{
	int length = 0;
	if (num == 0)
	{
		length = 1;
		return 1;
	}
	else
	{
		if (num > 0)
		{

		}
		else if (num < 0)
		{
			length++;
		}

		while (num != 0)
		{
			num /= 10;
			length++;
		}
		return length;
	}
}

int Matrix::getMaxLength() const
{
	int maxLength = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			int nowLength = 0;
			nowLength = getLength(arr[i][j]);
			if (nowLength > maxLength)
			{
				maxLength = nowLength;
			}
		}
	}
	return maxLength;
}

std::istream& operator>>(std::istream& is, Matrix& matrix)
{
	int num;
	for (int i = 0; i < SIZE; i++) 
	{
		for (int j = 0; j < SIZE; j++)
		{
			is >> num;
			matrix.set(i, j, num);
		}
	}
	return is;
}

Matrix Matrix::operator!() const
{
	Matrix resultMatrix;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			resultMatrix.arr[i][j] = arr[j][i];
		}
	}
	return resultMatrix;
}

Matrix Matrix::operator+(const Matrix& matrix) const
{
	Matrix resultMatrix;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			resultMatrix.arr[i][j] = arr[i][j] + matrix.arr[i][j];
		}
	}
	return resultMatrix;
}

Matrix Matrix::operator*(const Matrix& matrix) const
{
	Matrix resultMatrix;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			int sum = 0;
			for (int k = 0; k < SIZE; k++)
			{
				sum += (arr[i][k] * matrix.arr[k][j]);
			}
			resultMatrix.arr[i][j] = sum;

		}
	}
	return resultMatrix;
}