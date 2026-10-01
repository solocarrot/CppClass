#pragma once
class Matrix
{
private:
	static const int SIZE = 3;
	int arr[SIZE][SIZE];
	int resultWidth = 3;

public:
	void read();
	void print() const;
	Matrix add(Matrix mat);
	Matrix multi(Matrix mat);
	Matrix transpose();
	int getWidth(int,int);
	bool isPlus(int);
};
