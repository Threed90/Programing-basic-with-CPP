// 06.FishingBoat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double GetPrice(string, int);

int main()
{
	int budget, fishermans;
	string season;

	cin >> budget >> season >> fishermans;

	double price = GetPrice(season, fishermans);

	if (price <= budget)
	{
		cout << "Yes! You have " << fixed << setprecision(2) << (double)budget - price << " leva left." << endl;
	}
	else if (price > budget)
	{
		cout << "Not enough money! You need " << fixed << setprecision(2) << price - budget << " leva." << endl;
	}

	return 0;
}
double GetPrice(string season, int fishermans)
{
	double price;

	if (season == "Spring")
	{
		price = 3000;
	}
	else if (season == "Summer" || season == "Autumn")
	{
		price = 4200;
	}
	else if (season == "Winter")
	{
		price = 2600;
	}

	if (fishermans <= 6)
	{
		price -= price * 0.10;
	}
	else if (fishermans > 6 && fishermans <= 11)
	{
		price -= price * 0.15;
	}
	else if (fishermans > 11)
	{
		price -= price * 0.25;
	}

	if (season != "Autumn" && fishermans % 2 == 0)
	{
		price -= price * 0.05;
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
