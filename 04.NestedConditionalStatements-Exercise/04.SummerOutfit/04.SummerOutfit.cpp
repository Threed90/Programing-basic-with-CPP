// 04.SummerOutfit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int grade;
	string dayPart;

	cin >> grade >> dayPart;

	string result;

	if (grade >= 10 && grade <= 18)
	{
		if (dayPart == "Morning")
		{
			result = "get your Sweatshirt and Sneakers.";
		}
		else if (dayPart == "Afternoon")
		{
			result = "get your Shirt and Moccasins.";
		}
		else if (dayPart == "Evening")
		{
			result = "get your Shirt and Moccasins.";
		}
	}
	else if (grade > 18 && grade <= 24)
	{
		if (dayPart == "Morning")
		{
			result = "get your Shirt and Moccasins.";
		}
		else if (dayPart == "Afternoon")
		{
			result = "get your T-Shirt and Sandals.";
		}
		else if (dayPart == "Evening")
		{
			result = "get your Shirt and Moccasins.";
		}
	}
	else if (grade > 24)
	{
		if (dayPart == "Morning")
		{
			result = "get your T-Shirt and Sandals.";
		}
		else if (dayPart == "Afternoon")
		{
			result = "get your Swim Suit and Barefoot.";
		}
		else if (dayPart == "Evening")
		{
			result = "get your Shirt and Moccasins.";
		}
	}

	cout << "It's " << grade << " degrees, " << result << endl;
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
