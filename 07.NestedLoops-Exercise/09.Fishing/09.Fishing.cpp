// 09.Fishing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int dailyQuota;
	cin >> dailyQuota;

	cin.ignore();
	double sum = 0;
	int counter = 0;
	for (int i = 1; i <= dailyQuota; i++)
	{
		string fishName;
		getline(cin, fishName);

		if (fishName == "Stop")
		{
			goto Outer;
		}

		double fishKilos;
		cin >> fishKilos;

		double price = 0;

		for (int i = 0; i < fishName.length(); i++)
		{
			price += (char)fishName[i];
		}
		price /= fishKilos;

		if (i % 3 == 0)
		{
			sum += price;
		}
		else
		{
			sum -= price;
		}
		counter++;
		cin.ignore();
	}
	
	cout << "Lyubo fulfilled the quota!" << endl;

Outer:
	cout.setf(ios::fixed);
	cout.precision(2);
	if (sum < 0)
	{
		cout << "Lyubo lost " << abs(sum) << " leva today." << endl;
	}
	else
	{
		cout << "Lyubo\'s profit from " << counter << " fishes is " << sum << " leva." << endl;
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
