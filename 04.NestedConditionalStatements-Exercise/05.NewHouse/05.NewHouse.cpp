// 05.NewHouse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

double GetPrice(string, int);

int main()
{
	string flowers;
	int flowersNumber, budget;

	cin >> flowers >> flowersNumber >> budget;

	double price = GetPrice(flowers, flowersNumber);

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget < price)
	{
		cout << "Not enough money, you need " << price - (double)budget << " leva more." << endl;
	}
	else if (price <= budget)
	{
		cout << "Hey, you have a great garden with " << flowersNumber << " " << flowers << " and " << (double)budget - price << " leva left." << endl;
	}

	return 0;
}

double GetPrice(string flowers, int flowersNumber)
{
	double price;

	if (flowers == "Roses")
	{
		price = flowersNumber * 5.00;
		if (flowersNumber > 80)
		{
			price -= price * 0.10;
		}
	}
	else if (flowers == "Dahlias")
	{
		price = flowersNumber * 3.80;
		if (flowersNumber > 90)
		{
			price -= price * 0.15;
		}
	}
	else if (flowers == "Tulips")
	{
		price = flowersNumber * 2.80;
		if (flowersNumber > 80)
		{
			price -= price * 0.15;
		}
	}
	else if (flowers == "Narcissus")
	{
		price = flowersNumber * 3.00;
		if (flowersNumber < 120)
		{
			price += price * 0.15;
		}
	}
	else if (flowers == "Gladiolus")
	{
		price = flowersNumber * 2.50;
		if (flowersNumber < 80)
		{
			price += price * 0.20;
		}
	}

	return price;
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
