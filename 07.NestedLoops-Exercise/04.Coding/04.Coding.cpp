// 04.Coding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
	int num;
	cin >> num;
	int iterations = to_string(num).length();
	for (int i = 0; i < iterations; i++)
	{
		int lastDiggit = num % 10;
		if (lastDiggit == 0)
		{
			cout << "ZERO" << endl;
			num = num / 10;
			continue;
		}
		for (int j = 0; j < lastDiggit; j++)
		{
			cout << (char)(lastDiggit + 33);
		}
		cout << endl;
		num /= 10;
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
