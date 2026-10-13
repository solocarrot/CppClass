#pragma once

class Money
{
private:
	int dollar;
	int cent;
public:
	Money operator+(const Money&);
	

};