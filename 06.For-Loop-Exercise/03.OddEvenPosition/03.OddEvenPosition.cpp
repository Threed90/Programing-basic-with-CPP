// 03.OddEvenPosition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	double iterations, number;

	cin >> iterations;

	double oddSum = 0;
	double oddMin = INT_MAX;
	double oddMax = INT_MIN;
	double evenSum = 0;
	double evenMin = INT_MAX;
	double evenMax = INT_MIN;

	for (int i = 1; i <= iterations; i++)
	{
		cin >> number;

		if (i % 2 == 0)
		{
			evenSum += number;
			if (evenMin > number)
			{
				evenMin = number;
			}
			if (evenMax < number)
			{
				evenMax = number;
			}
		}
		else
		{
			oddSum += number;
			if (oddMin > number)
			{
				oddMin = number;
			}
			if (oddMax < number)
			{
				oddMax = number;
			}
		}
	}
	if ((int)(oddSum*10) != 0 && (int)(evenSum*10) != 0)
	{
		cout << "OddSum = " << oddSum << "," << endl;
		cout << "OddMin = " << oddMin << "," << endl;
		cout << "OddMax = " << oddMax << "," << endl;
		cout << "EvenSum = " << evenSum << "," << endl;
		cout << "EvenMin = " << evenMin << "," << endl;
		cout << "EvenMax = " << evenMax << endl;
	}
	else
	{
		if ((int)(oddSum * 10) == 0 && (int)(evenSum * 10) == 0)
		{
			cout << "OddSum = " << oddSum << "," << endl;
			cout << "OddMin = " << "No," << endl;
			cout << "OddMax = " << "No," << endl;
			cout << "EvenSum = " << evenSum << "," << endl;
			cout << "EvenMin = " << "No," << endl;
			cout << "EvenMax = " << "No" << endl;
		}
		if ((int)(oddSum * 10) == 0)
		{
			cout << "OddSum = " << oddSum << "," << endl;
			cout << "OddMin = " << "No," << endl;
			cout << "OddMax = " << "No," << endl;
			cout << "EvenSum = " << evenSum << "," << endl;
			cout << "EvenMin = " << evenMin << "," << endl;
			cout << "EvenMax = " << evenMax << endl;
		}
		else if ((int)(evenSum * 10) == 0)
		{
			cout << "OddSum = " << oddSum << "," << endl;
			cout << "OddMin = " << oddMin << "," << endl;
			cout << "OddMax = " << oddMax << "," << endl;
			cout << "EvenSum = " << evenSum << "," << endl;
			cout << "EvenMin = " << "No," << endl;
			cout << "EvenMax = " << "No" << endl;
		}
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
