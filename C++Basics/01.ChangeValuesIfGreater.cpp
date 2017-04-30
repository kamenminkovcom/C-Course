// FirstProjectCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int a = 3;
	int b = 5;
	if (a > b)
	{
		b = a - b;
		a = a - b;
		b = a + b;
	}
	cout << a <<  " " <<  b << endl;

    return 0;
}

