// 06.EqualSumsLeftRightPosition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int startNum, endNum;
	cin >> startNum >> endNum;

	if (startNum < 10000 || endNum>99999)
	{
		return 0;
	}

	for (int num = startNum; num<=endNum; num++)
	{
		int tempHolder = num;
		int sum1 = 0;
		int sum2 = 0;
		for (int i = 0; i < 2; i++)
		{
			sum1 += tempHolder % 10;
			tempHolder /= 10;
		}
		tempHolder = tempHolder / 10;
		for (int i = 0; i < 2; i++)
		{
			sum2 += tempHolder % 10;
			tempHolder /= 10;
		}
		if (sum1 == sum2)
		{
			cout << num << " ";
		}
		else
		{
			if (sum1 + (num/100)%10 == sum2)
			{
				cout << num << " ";
			}
			else if (sum2 + (num / 100) % 10 == sum1)
			{
				cout << num << " ";
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
