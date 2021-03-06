// 04.Vacation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double excursionPrice, cash;

	cin >> excursionPrice >> cash;

	int spendCounter = 0;
	int dayCounter = 0;
	double totalMoney = cash;

	
	while (true)
	{
		string action;
		double amount;
		cin >> action >> amount;

		dayCounter++;

		if (action == "spend")
		{
			spendCounter++;
			totalMoney -= amount;
			
			if (spendCounter == 5)
			{
				cout << "You can't save the money." << endl;
				cout << dayCounter << endl;
				break;
			}
			if (totalMoney < 0)
			{
				totalMoney = 0;
			}
		}
		else if (action == "save")
		{
			spendCounter = 0;
			totalMoney += amount;

			if (totalMoney >= excursionPrice)
			{
				cout << "You saved the money for " << dayCounter << " days." << endl;
				break;
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
