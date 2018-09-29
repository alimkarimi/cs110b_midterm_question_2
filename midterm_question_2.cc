/*
Question 2:
In the array received form the user, find the smallest and the largest number and print it out. 
*/

#include <iostream>
using namespace std;

void printArray(int[], int);
void swap(int[], int&, int&);

int main()
{
	cout << "How long would you like the array to be?" << endl;
	int SIZE;
	cin >> SIZE;

	int array[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Please enter the value for element " << i << endl;
		int element;
		cin >> element;
		array[i] = element;
	}

	printArray(array, SIZE);

	for (int i = 0; i < SIZE - 1; ++i)
	{
		int minValue = i;
		for (int j = i+1; j < SIZE; ++j)
		{
			if (array[j] < array[minValue])
			{
				minValue = j;
			}
		}
	swap(array, minValue, i);
	}

	printArray(array, SIZE);

	cout << "The min value is " << array[0] << " and the max value is " << array[SIZE-1] << endl;

}

void printArray(int array[], int size)
{
	cout << "The array printed looks like:" << endl;
	for (int i = 0; i < size; i++)
	{
		if (i < size)
		{
			cout << array[i] << ", ";
		}
	
	}
	cout << endl;

}

void swap(int array[], int &minValue, int &i)
{
	array[i] = array[minValue] + array[i];
	array[minValue] = array[i] - array[minValue];
	array[i] = array[i] - array[minValue];
}