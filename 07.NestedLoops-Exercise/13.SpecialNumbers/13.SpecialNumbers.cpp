// 13.SpecialNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int first = 1; first < 10; first++)
	{
		for (int second = 1; second < 10; second++)
		{
			for (int third = 1; third < 10; third++)
			{
				for (int four = 1; four < 10; four++)
				{
					if (num%first == 0 && num%second == 0 && num%third == 0 && num%four == 0)
					{
						cout << first << second << third << four << " ";
					}
				}
			}
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
