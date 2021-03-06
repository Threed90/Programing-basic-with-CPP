// 10.HotelRoom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

double GetStudioPrice(string, int);
double GetApartmentPrice(string, int);

int main()
{
	string month;
	int nights;
	
	cin >> month >> nights;

	double studioPrice = GetStudioPrice(month, nights);
	double apartmentPrice = GetApartmentPrice(month, nights);

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Apartment: " << apartmentPrice << " lv." << endl;
	cout << "Studio: " << studioPrice << " lv." << endl;
}
double GetStudioPrice(string month, int nights)
{
	double price;

	if (month == "May" || month == "October")
	{
		price = 50.00 * nights;

		if (nights > 14)
		{
			price -= price * 0.30;
		}
		else if (nights > 7)
		{
			price -= price * 0.05;
		}

	}
	else if (month == "June" || month == "September")
	{
		price = 75.20 * nights;

		if (nights > 14)
		{
			price -= price * 0.20;
		}
	}
	else if (month == "July" || month == "August")
	{
		price = nights * 76.00;
	}
	return price;
}

double GetApartmentPrice(string month, int nights)
{
	double price;

	if (month == "May" || month == "October")
	{
		price = 65.00 * nights;
	}
	else if (month == "June" || month == "September")
	{
		price = 68.70 * nights;
	}
	else if (month == "July" || month == "August")
	{
		price = nights * 77.00;
	}
	if (nights > 14)
	{
		price -= price * 0.10;
	}

	return price;
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
