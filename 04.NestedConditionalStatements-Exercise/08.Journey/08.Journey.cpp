// 08.Journey.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void PrintVacantionOportunities(double, string);

int main()
{
	double budget;
	string season;
	cin >> budget >> season;

	PrintVacantionOportunities(budget, season);
	return 0;
}

void PrintVacantionOportunities(double budget, string season)
{
	string destination, place;
	double price;

	if (budget <= 100)
	{
		destination = "Bulgaria";
		if (season == "summer")
		{
			place = "Camp";
			price = budget * 0.30;
		}
		else if (season == "winter")
		{
			place = "Hotel";
			price = budget * 0.70;
		}
	}
	else if (budget <= 1000)
	{
		destination = "Balkans";
		if (season == "summer")
		{
			place = "Camp";
			price = budget * 0.40;
		}
		else if (season == "winter")
		{
			place = "Hotel";
			price = budget * 0.80;
		}
	}
	else if (budget > 1000)
	{
		destination = "Europe";
		place = "Hotel";
		price = budget * 0.90;
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Somewhere in " << destination << endl << place << " - " << price << endl;
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
