// 07.TrailingZerosInFactorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int n;
	int zeros = 0;
	int divisor = 5;
	cin >> n;
	int multiply = n / divisor;
	while (multiply > 0)
	{
		zeros += multiply;
		multiply /= divisor;
	}
	cout << zeros << endl;
    return 0;
}

