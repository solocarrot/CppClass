#pragma once
class Matrix
{
private:
	static const int SIZE = 3;
	int arr[SIZE][SIZE];
	int maxWidth = 1;

public:
	void read();
	void getMaxWidth();
	void print() ;
	Matrix add(Matrix mat);
	Matrix multi(Matrix mat);
	Matrix transpose();
	int getWidth(int,int);
	bool isPlus(int);
};
