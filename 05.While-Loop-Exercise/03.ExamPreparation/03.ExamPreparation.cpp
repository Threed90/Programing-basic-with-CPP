// 03.ExamPreparation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int badGrade;
	cin >> badGrade;
	cin.ignore();

	int counter = 0;
	int problemsCounter = 0;
	int sumOfGrade = 0;
	string lastProblem;

	cout.setf(ios::fixed);
	cout.precision(2);

	while (counter != badGrade)
	{
		
		string problemsName;
		getline(cin, problemsName);

		if (problemsName == "Enough")
		{
			cout << "Average score: " << (double)sumOfGrade / problemsCounter << endl;
			cout << "Number of problems: " << problemsCounter << endl;
			cout << "Last problem: " << lastProblem << endl;
			return 0;
		}

		int grade;
		cin >> grade;
		cin.ignore();

		if (grade <= 4)
		{
			counter++;
		}

		problemsCounter++;
		sumOfGrade += grade;
		lastProblem = problemsName;

	}

	cout << "You need a break, " << counter << " poor grades." << endl;
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
