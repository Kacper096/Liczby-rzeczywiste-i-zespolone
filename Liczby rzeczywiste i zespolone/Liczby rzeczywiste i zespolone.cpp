// Liczby rzeczywiste i zespolone.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Re_Im.h"


int main()
{
	Re_Im pierwszy(3, 4);
	Re_Im drugi(1,2);
	
	auto trzeci = pierwszy + drugi;
	
	auto czwarty = drugi / drugi;
	cout << czwarty;

	
	
	
	
    return 0;
}

