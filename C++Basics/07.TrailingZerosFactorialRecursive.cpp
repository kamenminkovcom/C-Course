// 07.TrailingZerosFactorialRecursive.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int TrailingZeros(int factorial,int divisor=5);

int main()
{
	int factorial;
	cin >> factorial;
	cout << TrailingZeros(factorial) << endl;
	return 0;
}

int TrailingZeros(int factorial, int divisor)
{
	int multiply = factorial / divisor;
	if (multiply < 1)
	{
		return 0;
	}
	return TrailingZeros(factorial, divisor * 5) + multiply;
}