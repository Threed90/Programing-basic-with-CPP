// 08.CookieFactory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int batch;
	cin >> batch;

	bool ingredient1 = false;
	bool ingredient2 = false;
	bool ingredient3 = false;
	cin.ignore();
	int num = 1;
	while (batch>0)
	{
		string ingredient;
		getline(cin, ingredient);

		if (ingredient == "flour")
		{
			ingredient1 = true;
		}
		else if (ingredient == "eggs")
		{
			ingredient2 = true;
		}
		else if (ingredient == "sugar")
		{
			ingredient3 = true;
		}

		if (ingredient == "Bake!")
		{
			if (ingredient1 && ingredient2 && ingredient3)
			{
				cout << "Baking batch number " << num++ << "..." << endl;
				batch--;
				ingredient1 = 0;
				ingredient2 = 0;
				ingredient3 = 0;
			}
			else
			{
				cout << "The batter should contain flour, eggs and sugar!" << endl;
			}
		}
	}
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
