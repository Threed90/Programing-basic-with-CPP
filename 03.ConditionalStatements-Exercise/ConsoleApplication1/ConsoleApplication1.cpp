// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;
void PrintTime(int, int, int);
int main()
{
	int sec1, sec2, sec3;

	cin >> sec1 >> sec2 >> sec3;

	PrintTime(sec1, sec2, sec3);

	return 0;
}

void PrintTime(int sec1, int sec2, int sec3)
{
	int totalSec = sec1 + sec2 + sec3, hour = totalSec/60, minutes = totalSec%60;

	cout << hour << ':' << setfill('0') << setw(2) << minutes << endl;

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
