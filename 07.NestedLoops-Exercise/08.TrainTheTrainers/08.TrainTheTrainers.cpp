// 08.TrainTheTrainers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int juryMembers;
	cin >> juryMembers;
	cin.ignore();
	
	double totalAverage = 0;
	int count = 0;
	while (true)
	{
		string presentation;
		getline(cin, presentation);
		if (presentation == "Finish")
		{
			break;
		}
		double sum = 0;
		for (int i = 0; i < juryMembers; i++)
		{
			double grade;
			cin >> grade;
			sum += grade;
		}
		cout << fixed << setprecision(2) << presentation << " - " << sum / juryMembers << "." << endl;

		totalAverage += (sum / juryMembers);
		count++;
		cin.ignore();
	}
	cout << fixed << setprecision(2) << "Student\'s final assessment is " << totalAverage / count << "." << endl;
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
