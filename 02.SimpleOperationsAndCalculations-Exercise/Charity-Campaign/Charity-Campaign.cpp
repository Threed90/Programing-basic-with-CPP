// Charity-Campaign.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int campaignDays, confectioners, cakes, waffeles, pancakes;

	cin >> campaignDays >> confectioners >> cakes >> waffeles >> pancakes;

	double winsFor1Day = cakes * 45.00 + waffeles * 5.80 + pancakes * 3.20;
	double allDaysWins = winsFor1Day* confectioners * campaignDays;

	double totalIncome = allDaysWins - (allDaysWins / 8);

	cout << fixed << setprecision(2) << totalIncome << endl;
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
