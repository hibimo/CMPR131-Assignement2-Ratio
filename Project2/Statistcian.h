//this assignment does not store array
#pragma once
#include <iostream>
using namespace std;

class Statistcian
{
private:
	double smallest;
	double largest;
	double sum;
	int length;

public:
	//constructor
	//precondition: NA
	//postcondition: call erase() - initialize all private data to zero's
	Statistcian()
	{
		erase();
	}
	//precondition: number must be valid
	//postcondition: change the largest, smallest, increment length by 1, and add the number to sum
	void next_number(double number)
	{
		if (length == 0)// needed or not?? why do you need this? hint:we did not ask for negative numbers..
		{
			smallest = number;
			largest = number;
		}

		if (smallest > number)
			smallest = number;

		if (largest < number) 
			largest = number;

		length++;
		sum += number;
	}

	double getLargest() const //why const?
	{
		return largest;
	}

	double getSmallest() const
	{
		return smallest;
	}

	double getMean() const
	{
		if (length == 0)
			return 0.0;
		else
			return sum / length;
	}
	
	double getSum() const
	{
		return sum;
	}

	void erase() //its no const... meaning we are going to reset all small throuh length
	{
		smallest = 0.0;
		largest = 0.0;//why the largest is 100.0?? what is the significance?? YOU will be asked.why 0.0??
		sum = 0.0;
		length = 0;
	}

	
	friend ostream& operator<< (ostream& out, Statistcian& obj); 
};

ostream& operator<< (ostream& out, Statistcian& obj)
{
	cout << "\n largest" << obj.getLargest();
	cout << "\n smallest" << obj.getSmallest();
	cout << "\n sum" << obj.getSum();
	cout << "\n mean" << obj.getMean();

	return out;
}