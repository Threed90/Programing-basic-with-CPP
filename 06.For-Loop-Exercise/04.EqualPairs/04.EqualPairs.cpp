// 04.EqualPairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int iteration, num1, num2;

	cin >> iteration >> num1 >> num2;

	int sum = num1 + num2;
	int diff = INT_MIN;
	if (iteration == 1)
	{
		diff = 0;
	}
	for (int i = 0; i < iteration - 1; i++)
	{
		cin >> num1 >> num2;
		int sum2 = num1 + num2;
		if (i == iteration - 2)
		{
			if (diff < sum2 - sum)
			{
				diff = sum2 - sum;
				break;
			}
		}
		if (diff < sum - sum2)
		{

			diff = sum - sum2;
		}
		sum = sum2;

	}
	if (diff == 0)
	{
		cout << "Yes, value=" << sum << endl;
	}
	else
	{
		cout << "No, maxdiff=" << abs(diff) << endl;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
