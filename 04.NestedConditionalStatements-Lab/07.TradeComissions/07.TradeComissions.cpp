// 07.TradeComissions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string city;
	double sells, commision;

	cin >> city >> sells;

	if (!(city == "Sofia" || city == "Varna" || city == "Plovdiv") || sells < 0)
	{
		std::cout << "error" << endl;
		return 0;
	}

	bool isCommisionRange[] = { 0 <= sells && sells <= 500,	 500 < sells && sells <= 1000,	 1000 < sells && sells <= 10000,	sells > 10000 };

	if (isCommisionRange[0])
	{
		if (city == "Sofia")
		{
			commision = sells * 0.05;
		}
		else if (city == "Varna")
		{
			commision = sells * 0.045;
		}
		else if (city == "Plovdiv")
		{
			commision = sells * 0.055;
		}
	}
	else if (isCommisionRange[1])
	{
		if (city == "Sofia")
		{
			commision = sells * 0.07;
		}
		else if (city == "Varna")
		{
			commision = sells * 0.075;
		}
		else if (city == "Plovdiv")
		{
			commision = sells * 0.08;
		}
	}
	else if (isCommisionRange[2])
	{
		if (city == "Sofia")
		{
			commision = sells * 0.08;
		}
		else if (city == "Varna")
		{
			commision = sells * 0.10;
		}
		else if (city == "Plovdiv")
		{
			commision = sells * 0.12;
		}
	}
	else if (isCommisionRange[3])
	{
		if (city == "Sofia")
		{
			commision = sells * 0.12;
		}
		else if (city == "Varna")
		{
			commision = sells * 0.13;
		}
		else if (city == "Plovdiv")
		{
			commision = sells * 0.145;
		}
	}

	std::cout.setf(ios::fixed);
	std::cout.precision(2);
	std::cout << commision << endl;

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
