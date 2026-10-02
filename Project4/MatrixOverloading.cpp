#include <iostream>
#include "Matrix.h"

using namespace std;

void Matrix::set(int i, int j, int element)
{
	arr[i][j] = element;
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

int Matrix::get(int i, int j) const
{
	return arr[i][j];
}

std::ostream& operator<<(std::ostream& os, const Matrix& matrix)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			os << matrix.get(i, j);
		}
	}
	return os;
}