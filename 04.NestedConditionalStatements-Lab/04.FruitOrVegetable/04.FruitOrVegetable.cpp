// 04.FruitOrVegetable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string product;
	cin >> product;

	string products[] = { "banana", "apple", "kiwi", "cherry", "lemon", "grapes", "tomato", "cucumber", "pepper", "carrot" };

	for (size_t i = 0; i < sizeof(products); i++)
	{
		if (product == products[i]) 
		{
			if (i <= 5)
			{
				cout << "fruit" << endl;

				return 0;
			}
			else if (i>5 && i<=9)
			{
				cout << "vegetable" << endl;

				return 0;
			}
			
		}
	}

	cout << "unknown" << endl;

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
