// Name: Hibiki Morishita
// Date: 09/2026
// Detail: Assignment 2 - #15 pg94-95 Rational Number
// Group Member: 
#include<iostream>
#include<cctype>
#include"input.h"
#include"Rational.h"

using namespace std;

int main()
{
	Rational r1;
	Rational r2;

	char option;

	do
	{
		cout << "\n\t3> Rational Number menu\n";
		cout << "\t" << string(80, '=') << "\n";
		cout << "\t\tA. enter values of rational number R1\n";
		cout << "\t\tB. display R1\n";
		cout << "\t\tC. enter values for rational number R2\n";
		cout << "\t\tD. display R2\n";
		cout << "\t\tE. multiplication of 2 rational numbers (R1 * R2)\n";
		cout << "\t\tF. division of 2 rational numbers (R1 / R2)\n";
		cout << "\t\tG. addition of 2 rational numbers (R1 + R2)\n";
		cout << "\t\tH. subtraction of 2 rational numbers (R1 - R2)\n";
		cout << "\t\tI. (R1 == R2)\n";
		cout << "\t\tJ. (R1 < R2)\n";
		cout << "\t" << string(80, '-') << "\n";
		cout << "\t\t0. return\n";
		cout << "\t" << string(80, '=') << "\n";

		option = inputChar("\t\tOption: ");

		switch (toupper(option))
		{
		case 'A':
		{
			int numerator;
			int denominator;

			numerator = inputInteger(
				"\nEnter the value for the numerator: ");

			do
			{
				denominator = inputInteger(
					"Enter the value for the denominator: ");

				if (denominator == 0)
				{
					cout << "ERROR: Denominator cannot be zero.\n";
				}

			} while (denominator == 0);

			r1 = Rational(numerator, denominator);

			cout << "\nR1 has been stored as " << r1 << "\n";

			break;
		}
		case 'B':
		{
			cout << "\nRational number R1: " << r1 << "\n";
			break;
		}
		case 'C':
		{
			int numerator;
			int denominator;

			numerator = inputInteger(
				"\nEnter the value for the numerator: ");

			do
			{
				denominator = inputInteger(
					"Enter the value for the denominator: ");

				if (denominator == 0)
				{
					cout << "ERROR: Denominator cannot be zero.\n";
				}

			} while (denominator == 0);

			r2 = Rational(numerator, denominator);

			cout << "\nR2 has been stored as " << r2 << "\n";

			break;
		}
		case 'D':
		{
			cout << "\nRational number R2: " << r2 << "\n";
			break;
		}
		case 'E':
		{
			cout << "\nR1 * R2 = " << (r1 * r2) << "\n";
			break;
		}
		case 'F':
		{
			if (r2.getNumerator() == 0)
			{
				cout << "ERROR: Cannot divide by zero.\n";
			} else
			{
				cout << "\nR1 / R2 = " << (r1 / r2) << "\n";
			}
			break;
		}
		case 'G':
		{
			cout << "\nR1 + R2 = " << (r1 + r2) << "\n";
			break;
		}
		case 'H':
		{
			cout << "\nR1 - R2 = " << (r1 - r2) << "\n";
			break;
		}
		case 'I':
		{
			cout << boolalpha;
			cout << "\n(R1 == R2) : " << (r1 == r2) << "\n";
			break;
		}
		case 'J':
		{
			cout << boolalpha;
			cout << "\n(R1 < R2) : " << (r1 < r2) << "\n";
			break;
		}
		case '0':
			break;

		default:
			cout << "\nERROR: Invalid menu option.\n";
			break;
		}

		if (option != '0')
		{
			system("pause");
			system("cls");
		}
	} while (option != '0');

	return 0;

}
