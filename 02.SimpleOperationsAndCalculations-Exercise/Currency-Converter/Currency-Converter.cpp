// Currency-Converter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double sum;
	string CurrencyForExchange, ExchangedCurrency;
	cin >> sum >> CurrencyForExchange >> ExchangedCurrency;

	

	if (CurrencyForExchange == "BGN")
	{
		if (ExchangedCurrency == "USD")
		{
			sum /= 1.79549;
		}
		else if (ExchangedCurrency == "EUR") 
		{
			sum /= 1.95583;
		}
		else if (ExchangedCurrency == "GBP")
		{
			sum /= 2.53405;
		}
	}
	else if (CurrencyForExchange == "USD")
	{
		if (ExchangedCurrency == "BGN") 
		{
			sum *= 1.79549;
		}
		else if (ExchangedCurrency == "EUR")
		{
			sum = (sum * 1.79549) / 1.95583;
		}
		else if (ExchangedCurrency == "GBP")
		{
			sum = (sum * 1.79549) / 2.53405;
		}
	}
	else if (CurrencyForExchange == "EUR")
	{
		if (ExchangedCurrency == "BGN")
		{
			sum *= 1.95583;
		}
		else if (ExchangedCurrency == "USD")
		{
			sum = (sum * 1.95583) / 1.79549;
		}
		else if (ExchangedCurrency == "GBP")
		{
			sum = (sum * 1.95583) / 2.53405;
		}
	}
	else if (CurrencyForExchange == "GBP")
	{
		if (ExchangedCurrency == "BGN")
		{
			sum *= 2.53405;
		}
		else if (ExchangedCurrency == "EUR")
		{
			sum = (sum * 2.53405) / 1.95583;
		}
		else if (ExchangedCurrency == "USD")
		{
			sum = (sum * 2.53405) / 1.79549;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << sum << endl;
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
