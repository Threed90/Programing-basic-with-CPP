// 07.OddEvenSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int iterations, number, oddSum = 0, evenSum = 0;

	cin >> iterations;

	for (int i = 0; i < iterations; i++)
	{
		cin >> number;

		if (i % 2 == 0)
		{
			evenSum += number;
		}
		else
		{
			oddSum += number;
		}
	}

	if (oddSum == evenSum)
	{
		cout << "Yes" << endl << "Sum = " << oddSum << endl;
	}
	else
	{
		cout << "No" << endl << "Diff = " << abs(oddSum - evenSum) << endl;
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
