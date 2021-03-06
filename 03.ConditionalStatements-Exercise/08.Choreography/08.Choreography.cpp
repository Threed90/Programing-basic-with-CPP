// 08.Choreography.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void PrintResult(int, int, int);

int main()
{
	int steps, dancers, learningDays;

	cin >> steps >> dancers >> learningDays;

	PrintResult(steps, dancers, learningDays);

	return 0;
}

void PrintResult(int steps, int dancers, int days)
{
	

	double stepsPerDay = ceil((((double)steps / days) / steps)*100); // percent value
	double dancersStepPerDay = stepsPerDay / dancers; // percent value

	if (stepsPerDay <= 13)
	{
		cout << "Yes, they will succeed in that goal! ";
		cout << fixed << setprecision(2) << dancersStepPerDay;
		cout << "%." << endl;
	}
	else
	{
		cout << "No, They will not succeed in that goal! Required ";
		cout << fixed << setprecision(2) << dancersStepPerDay;
		cout << "% steps to be learned per day." << endl;
	}
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
