//assignement2 - 1
//
#include<iostream>
#include"input.h"
//#include "Statistcian.h"
#include "Rational.h"

//never hard code

using namespace std;

int main()
{
	Rational r1;
	Rational r2;

	char option;

	do
	{
		cout << "\n3> Rational Number menu\n";
		cout << "========================================\n";
		cout << "A. enter values of rational number R1\n";
		cout << "B. display R1\n";
		cout << "C. enter values for rational number R2\n";
		cout << "D. display R2\n";
		cout << "E. multiplication of 2 rational numbers (R1 * R2)\n";
		cout << "F. division of 2 rational numbers (R1 / R2)\n";
		cout << "G. addition of 2 rational numbers (R1 + R2)\n";
		cout << "H. subtraction of 2 rational numbers (R1 - R2)\n";
		cout << "I. (R1 == R2)\n";
		cout << "J. (R1 < R2)\n";
		cout << "----------------------------------------\n";
		cout << "0. return\n";
		cout << "========================================\n";

		option = inputChar("Option: ");

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
		case '0':
			break;

		default:
			cout << "\nERROR: Invalid menu option.\n";
			break;
		}

	} while (option != '0');

	return 0;

}
/*
{
	Statistcian test; // testing the default constructor
	srand(time(0));

	int size = 100;

	for (int i = 1; i <size;i++)
	{
		double number = rand() % 1000 * 0.1;// Only can create positive numbers? 
		test.next_number(number);// testingf the method
		cout << number << "\n";
	}

	cout << "\n largest" << test.getLargest();
	cout << "\n smallest" << test.getSmallest();
	cout << "\n sum" << test.getSum();
	cout << "\n mean" << test.getMean();

	cout << test << "\n";

	test.erase();

	cout << test << "\n";

	//cout << "\n largest" << test.getLargest();
	//cout << "\n smallest" << test.getSmallest();
	//cout << "\n sum" << test.getSum();
	//cout << "\n mean" << test.getMean();

	
}
*/