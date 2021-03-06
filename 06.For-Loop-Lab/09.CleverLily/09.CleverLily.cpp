// 09.CleverLily.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int age, toysPrice;
	double LaundryPrice;

	cin >> age >> LaundryPrice >> toysPrice;

	double giftedMoney = 0;
	double moneyPerBirthday = 10.00;
	int giftCount = 0;

	for (int i = 1; i <= age; i++)
	{
		if (i % 2 == 0)
		{
			giftedMoney += moneyPerBirthday;
			giftedMoney--;
			moneyPerBirthday += 10;
		}
		else
		{
			giftCount++;
		}
	}

	double total = giftedMoney + (giftCount*toysPrice);

	cout.setf(ios::fixed);
	cout.precision(2);

	if (total >= LaundryPrice)
	{
		cout << "Yes! " << total - LaundryPrice << endl;
	}
	else
	{
		cout << "No! " << LaundryPrice - total << endl;
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
