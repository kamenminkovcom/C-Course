// GCD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int GCD(int a, int b);

int main()
{

	int a;
	int b;
	cin >> a >> b;
	cout << GCD(a, b) << endl;
    return 0;
}

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a%b);
}
