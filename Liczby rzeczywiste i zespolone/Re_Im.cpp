#include "stdafx.h"
#include "Re_Im.h"





Re_Im::Re_Im(const float Re, const float Im)
	:Re(Re),Im(Im)
{
	
}

Re_Im::Re_Im(Re_Im const & other)
{
	this->Re = other.Re;
	this->Im = other.Im;

	
}

Re_Im::~Re_Im()
{
}

Re_Im Re_Im::operator+(Re_Im const & other)
{
	Re_Im wartownik = *this;

	wartownik.Re = this->Re + other.Re;
	wartownik.Im = this->Im + other.Im;


	return wartownik;
}

Re_Im Re_Im::operator+(float s)
{
	Re_Im wartownik = *this;
	wartownik.Re += s;

	return wartownik;
}

Re_Im Re_Im::operator-(const Re_Im & other)
{
	Re_Im wartownik = *this;

	wartownik.Re = this->Re - other.Re;
	wartownik.Im = this->Im - other.Im;

	return wartownik;
}

Re_Im Re_Im::operator-(float s)
{
	Re_Im wartownik = *this;
	wartownik.Re -= s;
	return wartownik;
}

Re_Im Re_Im::operator*(const Re_Im & other)
{
	Re_Im wartownik = *this;

	wartownik.Re = (wartownik.Re * other.Re) - (wartownik.Im * other.Im);
	wartownik.Im = (wartownik.Im * other.Re) + (this->Re * other.Im);

	return wartownik;
}

Re_Im Re_Im::operator*(const float s)
{
	Re_Im wartownik = *this;

	wartownik.Re *= s;
	wartownik.Im *= s;
	return wartownik;
}

Re_Im Re_Im::operator/(const Re_Im & other)
{
	Re_Im wartownik = *this;
	float mianownik = 0;

	mianownik = pow(other.Re, 2) + pow(other.Im, 2);

	if (mianownik != 0)
	{
		wartownik.Re = (wartownik.Re * other.Re + wartownik.Im * other.Im) / mianownik;

		wartownik.Im = (wartownik.Im * other.Re - wartownik.Re * other.Im) / mianownik;
	}

	else
		cout << "Mianowik jest zerem, nie wolno dzielic przez 0" << endl;
		

	return wartownik;
}

Re_Im Re_Im::operator/(const float s)
{
	Re_Im wartownik = *this;

	if (wartownik.Re != NULL)
		wartownik.Re /= s;

	else
		cout << "Nie wolno dzielic przez 0" << endl;

	return wartownik;
}

Re_Im Re_Im::operator=(const Re_Im & other)
{
	if (this->Re == other.Re && this->Im == other.Im)
		cout << "Liczby sa sobie rowne" << endl;
	else
		cout << "Liczby sa rozne" << endl;

	return Re_Im();
}

Re_Im Re_Im::operator++()
{
	this->Re++;
	this->Im++;

	return *this;
}

Re_Im Re_Im::operator++(int)
{
	Re_Im oldValue = *this;

	this->Re++;
	this->Im++;
	return oldValue;
}




ostream & operator<<(ostream & wyjscie, const Re_Im & other)
{
	if(other.Im == NULL)
		return wyjscie << other.Re << endl;

	else if (other.Re == NULL)
		return wyjscie << other.Im<<"i" << endl;

	else
	return wyjscie << other.Re << "," << "  " << other.Im << "i " << endl;

	// TODO: tu wstawiæ instrukcjê return
}

