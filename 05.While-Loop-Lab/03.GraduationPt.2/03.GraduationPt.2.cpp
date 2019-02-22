// 03.GraduationPt.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	cin >> name;

	int grade = 1;
	double sum = 0;
	int badGrade = 0;

	while (grade < 13)
	{
		double yearGrade;

		cin >> yearGrade;

		if (yearGrade >= 4.00)
		{
			sum += yearGrade;
			grade++;
		}
		else
		{
			badGrade++;
			if (badGrade == 2) 
			{
				cout << name << " has been excluded at " << grade << " grade" << endl;

				return 0;
			}
		}
	}

	grade--;
	double average = sum / grade;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << name << " graduated. Average grade: " << average << endl;

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
