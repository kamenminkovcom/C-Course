// reverceDigits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int Reverse(int a);

int main() 
{
	int a;
	cin >> a;
	cout << Reverse(a) << endl;
    return 0;
}

int Reverse(int a)
{
	int result = 0;
	while (a > 0)
	{
		int current = a % 10;
		result = result * 10 + current;
		a = a / 10;
	}
	return result;
}




