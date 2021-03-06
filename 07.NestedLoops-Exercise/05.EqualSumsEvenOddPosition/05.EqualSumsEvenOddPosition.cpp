// 05.EqualSumsEvenOddPosition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int startNum, endNum;
	cin >> startNum >> endNum;

	if (startNum < 100000 || endNum>300000)
	{
		return 0;
	}

	for (int num = startNum; num <= endNum; num++)
	{
		int digits[6];
		int holder = num;

		for (int digit = 0; digit < 6; digit++)
		{
			digits[digit] = holder % 10;
			holder /= 10;
		}
		if (digits[0] + digits[2] + digits[4] == digits[1] + digits[3] + digits[5])
		{
			cout << num << " ";
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
