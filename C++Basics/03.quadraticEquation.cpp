// quadraticEquation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	double a;
	double b;
	double c;
	std::cin >> a >> b >> c;
	double D = b*b - 4 * a*c;
	if (D == 0)
	{
		cout <<(-b) / 2 * a << endl;
	}
	else if (D > 0)
	{
		double x1 = ((-b + sqrt(D)) / 2 * a);
		double x2 = ((-b - sqrt(D)) / 2 * a);
		cout << x1 << " " << x2 << endl;
	}
	else
	{
		cout << "There are no real roots!" << endl;
	}

    return 0;
}

