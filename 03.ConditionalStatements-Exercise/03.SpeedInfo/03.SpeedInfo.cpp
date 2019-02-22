// 03.SpeedInfo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void PrintSpeedStatement(double);

int main()
{
	double speed;

	cin >> speed;

	PrintSpeedStatement(speed);

	return 0;
}

void PrintSpeedStatement(double speed)
{
	if (speed <= 10) 
	{
		cout << "slow" << endl;
	}
	else if (speed > 10 && speed <= 50)
	{
		cout << "average" << endl;
	}
	else if (speed > 50 && speed <= 150)
	{
		cout << "fast" << endl;
	}
	else if (speed > 150 && speed <= 1000)
	{
		cout << "ultra fast" << endl;
	}
	else
	{
		cout << "extremely fast" << endl;
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
