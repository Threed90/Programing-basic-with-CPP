// 09.ToyShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

double GetRevenues(int, int, int, int, int);
bool isEnough(double, double);

int main()
{
	double excursionPrice;
	int puzzles, dolls, teddyBears, minions, trucktoys;

	cin >> excursionPrice >> puzzles >> dolls >> teddyBears >> minions >> trucktoys;

	double revenues = GetRevenues(puzzles, dolls, teddyBears, minions, trucktoys);

	if (isEnough(excursionPrice, revenues))
	{
		cout << "Yes! " << fixed << setprecision(2) << revenues - excursionPrice << " lv left." << endl;
	}
	else
	{
		cout << "Not enough money! " << fixed << setprecision(2) << excursionPrice - revenues << " lv needed." << endl;
	}
}

double GetRevenues(int puzzles, int dolls, int teddyBears, int minions, int trucktoys)
{
	double total = puzzles * 2.60 + dolls * 3.00 + teddyBears * 4.10 + minions * 8.20 + trucktoys * 2.00;

	if (puzzles + dolls + teddyBears + minions + trucktoys >= 50)
	{
		total -= (total*0.25);
	}

	total -= (total*0.10);

	return total;
}

bool isEnough(double excursionPrice, double revenues)
{
	bool isEnoughMoney = false;

	if (revenues - excursionPrice >= 0)
	{
		isEnoughMoney = true;
	}

	return isEnoughMoney;
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
