#pragma once
class Array2;

class Array1
{
private:
	const int SIZE = 5;
	int arr[SIZE];


public:
	bool readAscSorted();
	Array2 merge(Array1 arr2);
};

class Array2
{
private:
	const int SIZE = 10;
public:
	int resultArr[SIZE];
	void print();
};