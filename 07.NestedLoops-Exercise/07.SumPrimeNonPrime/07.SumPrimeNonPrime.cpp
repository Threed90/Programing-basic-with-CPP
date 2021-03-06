// 07.SumPrimeNonPrime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int sumPrime = 0, sumNotPrime = 0;
	while (true)
	{
		string input;
		cin >> input;
		if (input == "stop" || input=="STOP")
		{
			break;
		}
		int num = stoi(input);

		if (num < 0)
		{
			cout << "Number is negative." << endl;
			continue;
		}
		if ((num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) && num != 2 && num != 3 && num != 5 && num != 7)
		{
			sumNotPrime += num;
		}
		else if (num == 1)
		{
			sumNotPrime += num;
		}
		else
		{
			sumPrime += num;
		}
	}

	cout << "Sum of all prime numbers is: " << sumPrime << endl;
	cout << "Sum of all non prime numbers is: " << sumNotPrime << endl;
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
