// 04.MetricConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>


using namespace std;
double GetEndValue(double, string, string);

int main()
{
	double valueInMeters;
	string from, to;

	cin >>valueInMeters>> from >> to;

	transform(from.begin(), from.end(), from.begin(), tolower);
	transform(to.begin(), to.end(), to.begin(), tolower);

	double convertedValue = GetEndValue(valueInMeters, from, to);

	cout.setf(ios::fixed);
	cout.precision(8);

	cout << convertedValue << endl;

	

	return 0;
}

double GetEndValue(double valueInMeters, string from, string to)
{
	double value;

	if (from == "m")
	{
		value = valueInMeters;
	}
	else if (from == "cm")
	{
		value = valueInMeters / 100;
	}
	else if (from == "mi")
	{
		value = valueInMeters / 0.000621371192;
	}
	else if (from == "in")
	{
		value = valueInMeters / 39.3700787;
	}
	else if (from == "km")
	{
		value = valueInMeters / 0.001;
	}
	else if (from == "ft")
	{
		value = valueInMeters / 3.2808399;
	}
	else if (from == "yd")
	{
		value = valueInMeters / 1.0936133;
	}
	else if (from == "mm")
	{
		value = valueInMeters / 1000;
	}

	if (to == "m")
	{
		value = value;
	}
	else if (to == "cm")
	{
		value *= 100;
	}
	else if (to == "mm")
	{
		value *= 1000;
	}
	else if (to == "mi")
	{
		value *= 0.000621371192;
	}
	else if (to == "in")
	{
		value *= 39.3700787;
	}
	else if (to == "km")
	{
		value *= 0.001;
	}
	else if (to == "ft")
	{
		value *= 3.2808399;
	}
	else if (to == "yd")
	{
		value *= 1.0936133;
	}

	return value;
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
