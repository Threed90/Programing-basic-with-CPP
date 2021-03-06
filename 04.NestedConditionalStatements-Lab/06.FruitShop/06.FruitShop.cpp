// 06.FruitShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
	string product, day;
	double quantity;

	cin >> product >> day >> quantity;

	double prices[7];

	if (day == "Monday" || day == "Tuesday"|| day == "Wednesday"|| day == "Thursday"|| day == "Friday")
	{
		prices[0] = 2.50;
		prices[1] = 1.20;
		prices[2] = 0.85;
		prices[3] = 1.45;
		prices[4] = 2.70;
		prices[5] = 5.50;
		prices[6] = 3.85;
	}
	else if (day == "Saturday" || day == "Sunday")
	{
		prices[0] = 2.70;
		prices[1] = 1.25;
		prices[2] = 0.90;
		prices[3] = 1.60;
		prices[4] = 3.00;
		prices[5] = 5.60;
		prices[6] = 4.20;
	}
	else
	{
		cout << "error" << endl;
		return 0;
	}

	string products[] = { "banana", "apple", "orange", "grapefruit", "kiwi", "pineapple", "grapes" };

	for (size_t i = 0; i < sizeof(products); i++)
	{
		if (product == products[i])
		{
			cout << fixed << setprecision(2) << quantity * prices[i] << endl;
			return 0;
		}
	}

	cout << "error" << endl;

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
