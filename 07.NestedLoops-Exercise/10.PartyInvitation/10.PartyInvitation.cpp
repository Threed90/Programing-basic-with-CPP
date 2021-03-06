// 10.PartyInvitation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int counter = 0;
	double invalidNames = 0;
	while (true)
	{
		cin >> input;
		if (input == "Statistic")
		{
			break;
		}
		input[0] = toupper(input[0]);
		bool isValid = true;
		for (int i = 0; i < input.length(); i++)
		{
			if (!isalpha(input[i]))
			{
				invalidNames++;
				isValid = false;
				cout << "Invalid name!" << endl;
				break;
			}
			if (i > 0)
			{
				input[i] = tolower(input[i]);
			}
		}
		if (isValid)
		{
			cout << input << endl;
		}
		counter++;
	}
	double validNames = counter - invalidNames;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Valid names are " << (validNames / counter) * 100 << "% from " << counter << " names." << endl;
	cout << "Invalid names are " << (invalidNames / counter) * 100 << "% from " << counter << " names." << endl;

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
