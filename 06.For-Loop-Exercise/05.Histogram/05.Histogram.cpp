// 05.Histogram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int iterator, number;

	cin >> iterator;

	int till200 = 0, till400 = 0, till600 = 0, till800 = 0, over = 0;


	for (int i = 0; i < iterator; i++)
	{
		cin >> number;

		if (number < 200)
		{
			till200++;
		}
		else if (number >= 200 && number < 400)
		{
			till400++;
		}
		else if (number >= 400 && number < 600)
		{
			till600++;
		}
		else if (number >= 600 && number < 800)
		{
			till800++;
		}
		else
		{
			over++;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout<< ((double)till200/iterator)*100 << "%" << endl;
	cout<< ((double)till400/iterator)*100 << "%" << endl;
	cout<< ((double)till600/iterator)*100 << "%" << endl;
	cout<< ((double)till800/iterator)*100 << "%" << endl;
	cout<< ((double)over/iterator)*100 << "%" << endl;

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
