// minMaxInSequence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int n;
	cin >> n;
	int min = INT_MAX;
	int max = INT_MIN;
	for (int i = 1; i <= n; i++)
	{
		int current;
		cin >> current;
		if (current < min)
			min = current;
		if (current > max)
			max = current;
	}
	cout << "Min=" << min << endl;
	cout << "Max=" << max << endl;
    return 0;
}

