// 09.MagicNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int magicNum;
	cin >> magicNum;

	for (int x1 = 1; x1 <= 9; x1++)
	{
		for (int x2 = 1; x2 <= 9; x2++)
		{
			for (int x3 = 1; x3 <= 9; x3++)
			{
				for (int x4 = 1; x4 <= 9; x4++)
				{
					for (int x5 = 1; x5 <= 9; x5++)
					{
						for (int x6 = 1; x6 <= 9; x6++)
						{
							if (magicNum == (x1 * x2 * x3 * x4 * x5 * x6))
							{
								cout << x1 << x2 << x3 << x4 << x5 << x6 << " ";
							}
						}
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
