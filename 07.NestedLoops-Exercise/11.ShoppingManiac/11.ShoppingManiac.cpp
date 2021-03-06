// 11.ShoppingManiac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
	int amount;
	cin >> amount;

	int clothesCounter = 0;
	int sumSpents = 0;

	if (amount == 0)
	{
		cout << "For " << clothesCounter << " clothes I spent " << sumSpents << " lv and have " << amount - sumSpents << " lv left." << endl;
		return 0;
	}
	while (true)
	{
		string action;
		cin >> action;

		if (action == "enough")
		{
			break;
		}
		if (action == "enter")
		{
			while (true)
			{
				string clothesPrice;
				cin >> clothesPrice;
				if (clothesPrice == "leave")
				{
					break;
				}
				else if (!clothesPrice.find_first_not_of("0123456789"))
				{
					cin.ignore();
					continue;
				}
				else
				{
					sumSpents += stoi(clothesPrice);
				}

				if (amount - sumSpents > 0)
				{
					clothesCounter++;
				}
				else if (amount- sumSpents == 0)
				{
					clothesCounter++;
					cout << "For " << clothesCounter << " clothes I spent " << sumSpents << " lv and have " << amount - sumSpents << " lv left." << endl;
					return 0;
				}
				else if(amount - sumSpents < 0)
				{
					cout << "Not enough money." << endl;
					sumSpents -= stoi(clothesPrice);
				}
			}
		}
		else
		{
			cin.ignore();
			continue;
		}

	}
	cout << "For " << clothesCounter << " clothes I spent " << sumSpents << " lv and have " << amount - sumSpents << " lv left." << endl;
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
