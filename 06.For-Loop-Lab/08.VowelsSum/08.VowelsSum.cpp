// 08.VowelsSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int sum = 0;

	getline(cin, input);

	for (int i = 0; i <input.length(); i++)
	{
		if (input[i] == 'a')
		{
			sum++;
		} 
		else if (input[i] == 'e')
		{
			sum += 2;
		}
		else if (input[i] == 'i')
		{
			sum += 3;
		}
		else if (input[i] == 'o')
		{
			sum += 4;
		}
		else if (input[i] == 'u')
		{
			sum += 5;
		}
	}
	cout << sum << endl;

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
