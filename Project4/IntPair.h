#pragma once
class IntPair
{
public:
	IntPair(int firstValue, int secondValue);
	IntPair operator++();
	IntPair operator++(int);
	void setFirst(int newValue);
	void setSecond(int newValue);
	int getFirst() const;
	int getSecond() const;
private:
	int first;
	int second;
};