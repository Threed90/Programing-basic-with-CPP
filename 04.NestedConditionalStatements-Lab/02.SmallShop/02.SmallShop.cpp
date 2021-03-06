// 02.SmallShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

double GetPrice(string, string, double);

int main()
{
	string product, city;
	double quantity;

	cin >> product >> city >> quantity;

	double price = GetPrice(product, city, quantity);

	cout << price;

	return 0;
}

double GetPrice(string product, string city, double quantity)
{
	double price = 0;

	if (city == "Sofia")
	{
		if (product == "coffee")
		{
			price = quantity * 0.50;
		}
		else if (product == "water")
		{
			price = quantity * 0.80;
		}
		else if (product == "beer")
		{
			price = quantity * 1.20;
		}
		else if (product == "sweets")
		{
			price = quantity * 1.45;
		}
		else if (product == "peanuts")
		{
			price = quantity * 1.60;
		}
	}
	else if (city == "Plovdiv")
	{
		if (product == "coffee")
		{
			price = quantity * 0.40;
		}
		else if (product == "water")
		{
			price = quantity * 0.70;
		}
		else if (product == "beer")
		{
			price = quantity * 1.15;
		}
		else if (product == "sweets")
		{
			price = quantity * 1.30;
		}
		else if (product == "peanuts")
		{
			price = quantity * 1.50;
		}
	}
	else if (city == "Varna")
	{
		if (product == "coffee")
		{
			price = quantity * 0.45;
		}
		else if (product == "water")
		{
			price = quantity * 0.70;
		}
		else if (product == "beer")
		{
			price = quantity * 1.10;
		}
		else if (product == "sweets")
		{
			price = quantity * 1.35;
		}
		else if (product == "peanuts")
		{
			price = quantity * 1.55;
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
