// 06.LeftAndRightSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int half_iterations, number, rightSum = 0, leftSum = 0;

	cin >> half_iterations;

	for (int i = 1; i <= half_iterations*2; i++)
	{
		cin >> number;

		if (i <= half_iterations)
		{
			leftSum += number;
		}
		else
		{
			rightSum += number;
		}
	}

	if (leftSum == rightSum)
	{
		cout << "Yes, sum = " << leftSum << endl;
	}
	else
	{
		cout << "No, diff = " << abs(leftSum - rightSum) << endl;
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
