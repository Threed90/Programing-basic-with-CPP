// 06.Number-100-200.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string GetNumberSentence(int);

int main()
{
	int number;
	cin >> number;
	cout << GetNumberSentence(number) << endl;
}

string GetNumberSentence(int number)
{
	string numChecker;
	if (number < 100)
	{
		numChecker = "Less than 100";
	}
	else if (number >= 100 && number <= 200)
	{
		numChecker = "Between 100 and 200";
	}
	else
	{
		numChecker = "Greater than 200";
	}

	return numChecker;
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
