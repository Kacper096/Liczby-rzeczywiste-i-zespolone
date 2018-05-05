#pragma once
#include <iostream>


using namespace std;

class Re_Im
{
	float Re, Im;
public:
	Re_Im(const float Re = 0,const float Im = 0);
	Re_Im(const Re_Im & other);
	~Re_Im();

	Re_Im operator+(const Re_Im  & other);
	Re_Im operator+(const float s);

	Re_Im operator-(const Re_Im &other);
	Re_Im operator-(const float s);

	Re_Im operator*(const Re_Im &other);
	Re_Im operator*(const float s);

	Re_Im operator/(const Re_Im &other);
	Re_Im operator/(const float s);

	Re_Im operator=(const Re_Im &other);

	Re_Im operator++();
	Re_Im operator++(int);

	friend ostream & operator<<(ostream &wyjscie, const Re_Im &other);
	

	
};

