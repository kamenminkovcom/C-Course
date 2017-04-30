// 09.TestReverse.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int Reverse(int a);
bool IsAccurate();

int main()
{
	cout << IsAccurate() << endl;
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

bool IsAccurate()
{
	for (int i = 1; i <= 10; i++)
	{
		int number;
		int expected;
		cin >> number >> expected;
		if (Reverse(number) != expected)
			return false;
	}
	return true;
}






