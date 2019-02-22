// 05.Coins.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	double balance;

	cin >> balance;

	balance *= 100;

	int counter = 0;

	while ( (int)balance != 0)
	{
		if (balance >= 200)
		{
			balance -= 200;
		}
		else if (balance >= 100)
		{
			balance -= 100;
		}
		else if (balance >= 50)
		{
			balance -= 50;
		}
		else if (balance >= 20)
		{
			balance -= 20;
		}
		else if (balance >= 10)
		{
			balance -= 10;
		}
		else if (balance >= 5)
		{
			balance -= 5;
		}
		else if (balance >= 2)
		{
			balance -= 2;
		}
		else if (balance >= 1)
		{
			balance -= 1;
		}
		counter++;
	}

	cout << counter << endl;
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
