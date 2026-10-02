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
	int maxWidth = matrix.getMaxWidth();

	for (int i = 0; i < SIZE; i++)
	{
		printf("|");
		for (int j = 0; j < SIZE; j++)
		{
			for (int k = maxWidth; k > 0; k--)
			{
				int nowNum = matrix.get(i, j);
				os << nowNum % 10;
				nowNum /= 10;
				if (nowNum == 0) { os << " "; }
			}
			
		}
		printf("|\n");
	}
	return os;
}

Matrix Matrix::operator!() const
{
	Matrix matrix;
	for (int i = 0; i < SIZE;i++)
	{
		for (int j = 0;j < SIZE;j++)
		{
			matrix.arr[i][j] = arr[j][i];
		}
	}
	return matrix;
}

int Matrix::getMaxWidth() const
{
	int maxWidth;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			int nowNum = get(i, j);
			int width = 0;
			if (nowNum == 0) { width = 1; continue; }
			else
			{
				if (nowNum < 0) { width++; }
				while ((nowNum) != 0)
				{
					nowNum /= 10;
					width++;
				}
			}
			if (width > maxWidth) { maxWidth = width; }
		}
		
	}
	return maxWidth;
}
