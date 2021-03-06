// 10.MatchTickets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double GetLefted(double , int);
double GetPriceOfTickets(string, int);

int main()
{
	double budget;
	string category;
	int people;

	cin >> budget >> category >> people;

	double lefted = GetLefted(budget, people);

	double ticketPrice = GetPriceOfTickets(category, people);

	if (lefted > ticketPrice)
	{
		cout << "Yes! You have " << fixed << setprecision(2) << lefted - ticketPrice << " leva left." << endl;
	}
	else
	{
		cout << "Not enough money! You need " << fixed << setprecision(2) << ticketPrice - lefted << " leva." << endl;
	}

	return 0;
	
}

double GetLefted(double budget, int people)
{
	double lefted = 0;

	if (people > 0 && people < 5)
	{
		lefted =budget -  0.75 * budget;
	}
	else if (people >= 5 && people < 10)
	{
		lefted = budget - 0.60 * budget;
	}
	else if (people >= 10 && people < 25)
	{
		lefted = budget - budget * 0.5;
	}
	else if (people >= 25 && people < 50)
	{
		lefted = budget - budget * 0.40;
	}
	else if (people >= 50)
	{
		lefted = budget - budget * 0.25;
	}

	return lefted;
}

double GetPriceOfTickets(string category, int people)
{
	double ticketPrice = 0;
	if (category == "VIP")
	{
		ticketPrice = people * 499.99;
	}
	else if (category == "Normal")
	{
		ticketPrice = people * 249.99;
	}

	return ticketPrice;
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
