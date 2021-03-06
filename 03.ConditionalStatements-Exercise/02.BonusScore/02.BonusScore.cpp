// 02.BonusScore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;
double GetBonus(int);

int main()
{
	int number;
	cin >> number;

	double bonus = GetBonus(number);

	cout << bonus << endl << bonus + number << endl;

	return 0;
}

double GetBonus(int number)
{
	double bonus;
	if (number <= 100)
	{
		bonus = 5;
	}
	else if (number > 1000)
	{
		bonus = number * 0.10;
	}
	else if (number > 100)
	{
		bonus = number * 0.20;
	}

	if (number % 2 == 0)
	{
		bonus++;
	}
	else if (number % 10 == 5)
	{
		bonus += 2;
	}

	return bonus;
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
