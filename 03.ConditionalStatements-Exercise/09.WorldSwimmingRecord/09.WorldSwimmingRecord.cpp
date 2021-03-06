// 09.WorldSwimmingRecord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

void PrintResult(double, double, double);

int main()
{
	double record, distance, secForMeter;

	cin >> record >> distance >> secForMeter;

	PrintResult(record, distance, secForMeter);

	return 0;
}

void PrintResult(double record, double distance, double secForMeter)
{
	double totalMeters = (distance * secForMeter) + (((int)distance / 15)*12.5);

	if (totalMeters < record)
	{
		cout << "Yes, he succeeded! The new world record is ";
		cout << fixed << setprecision(2) << totalMeters;
		cout << " seconds." << endl;
	}
	else
	{
		cout << "No, he failed! He was ";
		cout << fixed << setprecision(2) << totalMeters - record;
		cout << " seconds slower." << endl;
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
