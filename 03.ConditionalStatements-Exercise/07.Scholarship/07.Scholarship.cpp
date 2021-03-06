// 07.Scholarship.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void PrintScholarship(double, double, double);
string GetDecision(double, double, double, double, double);

int main()
{
	double  revenues, grade, minSalary;

	cin >> revenues >> grade >> minSalary;

	PrintScholarship(revenues, grade, minSalary);

	return 0;
}

void PrintScholarship(double revenues, double grade, double minSalary)
{
	double socialScholarship = minSalary * 0.35;
	double excellectRezultsScholarship = grade * 25;

	cout << GetDecision(revenues, grade, minSalary, socialScholarship, excellectRezultsScholarship) << endl;
}

string GetDecision(double revenues, double grade, double minSalary, double socialScholarship, double excellectRezultsScholarship)
{
	bool isSocial = revenues < minSalary && grade > 4.50;
	bool isForExcellentResults = grade >= 5.50;

	int social = floor(socialScholarship);
	int excellent = floor(excellectRezultsScholarship);

	string decision;

	if ((!isSocial) && (!isForExcellentResults))
	{
		decision = "You cannot get a scholarship!";
	}
	else if (isSocial && isForExcellentResults)
	{
		if (socialScholarship > excellectRezultsScholarship)
		{
			decision = "You get a Social scholarship " + to_string(social) + " BGN";
		}
		else
		{
			decision = "You get a scholarship for excellent results " + to_string(excellent) + " BGN";
		}
	}
	else if (isSocial && (!isForExcellentResults))
	{
		decision = "You get a Social scholarship " + to_string(social) + " BGN";
	}
	else if ((!isSocial) && isForExcellentResults)
	{
		decision = "You get a scholarship for excellent results " + to_string(excellent) + " BGN";
	}

	return decision;
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
