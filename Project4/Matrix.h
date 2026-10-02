#pragma once
#include <iostream>

const int SIZE = 3;

// int num; 전역변수로 선언하면안됨 (왜?)

class Matrix
{
private:
	int arr[SIZE][SIZE];
	static int maxWidth;
	
	
public:
	void set(int,int,int);
	int get(int,int) const;

};

std::istream& operator>>(std::istream& is, Matrix&);
std::ostream& operator<<(std::ostream& os, const Matrix&);