#pragma once
#include <iostream>

const int SIZE = 3;

class Matrix
{
private:
	int arr[SIZE][SIZE];
	
	
public:
	void set(int,int,int);
	int get(int,int) const;

	int getLength(int) const;
	int getMaxLength() const;

	Matrix operator!() const;
	Matrix operator+(const Matrix&) const;
	Matrix operator*(const Matrix&) const;

};

std::istream& operator>>(std::istream& is, Matrix&);
std::ostream& operator<<(std::ostream& os, const Matrix&);