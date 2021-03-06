// 07.OnTimeForTheExam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int GetTime(int, int, int, int);
void PrintTime(int);

int main()
{
	int examHour, examMin, arrivalHour, arrivalMin;

	cin >> examHour >> examMin >> arrivalHour >> arrivalMin;

	int leftedTime = GetTime(examHour, examMin, arrivalHour, arrivalMin);

	PrintTime(leftedTime);

	return 0;
}
int GetTime(int examHour, int examMin, int arrivalHour, int arrivalMin)
{
	int examTime = examHour * 60 + examMin;
	int arrivalTime = arrivalHour * 60 + arrivalMin;

	int leftedTime = examTime - arrivalTime;

	return leftedTime;
}
void PrintTime(int leftedTime)
{
	if (leftedTime >= 0 && leftedTime<=30)
	{
		cout << "On time" << endl;
	}
	else if (leftedTime > 30)
	{
		cout << "Early" << endl;
	}
	else
	{
		cout << "Late" << endl;
	}
	
	int hour, min;
	if (leftedTime >= 0 && leftedTime <=59)
	{
		cout << leftedTime << " minutes before the start" << endl;  //<< setfill('0') << setw(2)  
	}
	else if (leftedTime > 59)
	{
		hour = leftedTime / 60;
		min = leftedTime % 60;
		cout << hour << ":" << setfill('0') << setw(2) << min << " hours before the start" << endl;
	}
	else if(leftedTime< (-59))
	{
		hour = abs(leftedTime) / 60;
		min = abs(leftedTime) % 60;
		cout << hour << ":" << setfill('0') << setw(2) << min << " hours after the start" << endl;
	}
	else
	{
		cout <<  abs(leftedTime) << " minutes after the start" << endl; //setfill('0') << setw(2) <<
	}
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
