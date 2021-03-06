// 09.OperationsBetweenNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void PrintResult(int, int, char);

int main()
{
	int N1, N2;
	char Operator;

	cin >> N1 >> N2 >> Operator;

	PrintResult(N1, N2, Operator);

	return 0;
}
void PrintResult(int N1, int N2, char Operator)
{

	cout.setf(ios::fixed);
	cout.precision(2);
	if (Operator == '+')
	{
		if ((N1 + N2) % 2 == 0)
		{
			cout << N1 << " " << Operator << " " << N2 << " = " << N1 + N2 << " - even" << endl;
		}
		else
		{
			cout << N1 << " " << Operator << " " << N2 << " = " << N1 + N2 << " - odd" << endl;
		}
	}
	else if (Operator == '-')
	{
		if ((N1 - N2) % 2 == 0)
		{
			cout << N1 << " " << Operator << " " << N2 << " = " << N1 - N2 << " - even" << endl;
		}
		else
		{
			cout << N1 << " " << Operator << " " << N2 << " = " << N1 - N2 << " - odd" << endl;
		}
	}
	else if (Operator == '*')
	{
		if ((N1 * N2) % 2 == 0)
		{
			cout << N1 << " " << Operator << " " << N2 << " = " << N1 * N2 << " - even" << endl;
		}
		else
		{
			cout << N1 << " " << Operator << " " << N2 << " = " << N1 * N2 << " - odd" << endl;
		}
	}
	else if (Operator == '/')
	{
		if (N2 == 0)
		{
			cout << "Cannot divide " << N1 << " by zero" << endl;
		}
		else
		{
			cout << N1 << " " << Operator << " " << N2 << " = " << (double)N1 / N2 << endl;
		}
	}
	else if (Operator == '%')
	{
		if (N2 == 0)
		{
			cout << "Cannot divide " << N1 << " by zero" << endl;
		}
		else
		{
			cout << N1 << " " << Operator << " " << N2 << " = " << N1 % N2 << endl;
		}
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
