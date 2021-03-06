// 06.Three-brothers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double GetCleaningTime(double, double, double);
void PrintSurprice(double, double);

int main()
{
	double firstBroTime, secondBroTime, thirdBroTime, fatherTime;

	cin >> firstBroTime >> secondBroTime >> thirdBroTime >> fatherTime;

	double cleaningTime = GetCleaningTime(firstBroTime, secondBroTime, thirdBroTime);

	cout << "Cleaning time: " << fixed << setprecision(2) << cleaningTime << endl;

	PrintSurprice(fatherTime, cleaningTime);

}

double GetCleaningTime(double firstBroTime, double secondBroTime, double thirdBroTime)
{
	double cleaningTime = 1 / (1 / firstBroTime + 1 / secondBroTime + 1 / thirdBroTime);

	cleaningTime += (cleaningTime * 0.15);

	return cleaningTime;

}

void PrintSurprice(double fatherTime, double cleaningTime)
{

	if (cleaningTime <= fatherTime)
	{
		int x = floor(fatherTime - cleaningTime);
		cout << "Yes, there is a surprise - time left -> " << x << " hours." << endl;
	}
	else
	{
		int x = ceil(cleaningTime - fatherTime);
		cout << "No, there isn't a surprise - shortage of time -> " << x << " hours." << endl;
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
