// signOfProduct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int a= -10;
	int b = -10;
	int c = 6;
	int minusCounter = 0;
	int arr[] = { a, b, c };
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] < 0)
		{
			minusCounter++;
		}
	}

	if (minusCounter % 2 == 0)
	{
		cout << "+" << endl;
	}
	else
	{
		cout << "-" << endl;
	}

    return 0;
}

