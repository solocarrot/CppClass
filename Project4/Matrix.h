#pragma once
#include <iostream>

const int SIZE = 3;

// int num; 전역변수로 선언하면안됨 (왜?)

class Matrix
{
private:
	int arr[SIZE][SIZE];

	
public:
	void set(int,int,int);
	int get(int,int) const;

	Matrix operator!() const;

	//maxWidth를 바꾸는 함수 이차원배열 cout하기전에 실행됨
	int getMaxWidth() const;


};

std::istream& operator>>(std::istream& is, Matrix&);
std::ostream& operator<<(std::ostream& os, const Matrix&);