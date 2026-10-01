#pragma once
class MyArray2;

class MyArray1
{
private:
	static const int SIZE = 5;
	int arr[SIZE];


public:
	bool readAscSorted();
	MyArray2 merge(MyArray1 arr2);
};

class MyArray2
{
private:
	static const int SIZE = 10;
public:
	int resultArr[SIZE];
	void print();
};