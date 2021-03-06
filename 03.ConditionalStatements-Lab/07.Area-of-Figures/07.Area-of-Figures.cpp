// 07.Area-of-Figures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;
double GetArea(string);
int main()
{
	string figure;
	cin >> figure;

	double area = GetArea(figure);

	cout << fixed << setprecision(3) << area << endl;
}

double GetArea(string figure)
{
	double area;
	if (figure == "square")
	{
		double side;
		cin >> side;
		area = side * side;

	}
	else if (figure == "rectangle")
	{
		double a, b;
		cin >> a >> b;
		area = a * b;
	}
	else if (figure == "triangle")
	{
		double a, h;
		cin >> a >> h;
		area = a * h / 2;
	}
	else if (figure == "circle")
	{
		double r;
		cin >> r;
		area = 3.14159265359 * r * r;
	}

	return area;
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
