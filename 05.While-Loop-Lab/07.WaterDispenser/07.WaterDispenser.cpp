// 07.WaterDispenser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int volume;

	cin >> volume;
	int total = 0;
	int counter = 0;

	while (true)
	{
		string button;
		cin >> button;

		counter++;

		if (button == "Easy")
		{
			total += 50;
		}
		else if (button == "Medium")
		{
			total += 100;
		}
		else if (button == "Hard")
		{
			total += 200;
		}

		if (total == volume)
		{
			cout << "The dispenser has been tapped " << counter << " times." << endl;
			break;
		}
		else if (total > volume)
		{
			cout << total - volume << "ml has been spilled." << endl;
			break;
		}
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
