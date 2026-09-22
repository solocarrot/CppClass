#include <iostream>
using namespace std;

const int SIZE = 3;

//void transpose(int[][SIZE], int[][SIZE], int);
//void add(int[][SIZE], int[][SIZE], int[][SIZE], int);
void multiply(int[][SIZE], int[][SIZE], int[][SIZE], int);

int main() {
	const int SIZE = 3;

	int matrix1[SIZE][SIZE] = { {1,2,3},{4,5,6},{7,8,9} };
	int matrix2[SIZE][SIZE] = { {1,-1,0},{0,-1,1},{-1,1,0} };
	int resultArr[SIZE][SIZE];
	//transpose(matrix1, resultArr, SIZE);
	multiply(matrix1, matrix2, resultArr, SIZE);

	for (int i = 0; i < 3; i++) {
		cout << "|";
		for (int j = 0; j < 3; j++) {
			cout << " " << resultArr[i][j];
		}
		cout << "|" << endl;
	}

}
//void transpose(int arr[][SIZE], int resultArr[][SIZE], int SIZE)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		{
//			resultArr[j][i] = arr[i][j];
//		}
//	}
//}

//void add(int arr1[][SIZE], int arr2[][SIZE], int resultArr[][SIZE], int SIZE) 
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		{
//			resultArr[i][j] = arr1[i][j] + arr2[i][j];
//		}
//	}
//}

void multiply(int arr1[][SIZE], int arr2[][SIZE], int resultArr[][SIZE], int SIZE) 
{
		for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			int sum = 0;
			for (int k = 0; k < SIZE;k++) 
			{
				sum += arr1[i][k] * arr2[k][j];
			}
			resultArr[i][j] = sum;
		}
	}
}
