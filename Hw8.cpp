#include <iostream>
#include <iomanip>
using namespace std;

void displayArray(int array[], int size);
void selectionSort(int array[], int size);
int findMax(int array[], int size);
int findMin(int array[], int size);
double findAvg(int array[], int size);


int main()
{
	int quantity;
	int scores[50];

	cout << "How many scores do you want to enter? ";
	cin >> quantity;
	for (int i = 0; i < quantity; i++)
	{
		cout << "Enter score #" << i + 1 << ": ";
		cin >> scores[i];
	}
	displayArray(scores, quantity);
	selectionSort(scores, quantity);
	
	cout << "\nHighest score: " << findMax(scores,quantity);
	cout << "\nLowest score: " << findMin(scores, quantity);
	cout << "\nAverage of scores: " << setprecision(1) << fixed << showpoint<< findAvg(scores, quantity);

	return 0;
}

void displayArray(int array[], int size)
{
	cout << "Original order scores are: ";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}

void selectionSort(int array[], int size)
{
	int temp;
	
	for (int k = 0; k < size-1; k++)
	{
		for (int i = k; i < size; i++)
		{
			if (array[i] > array[k])
			{
				temp = array[i];
				array[i] = array[k];
				array[k] = temp;
			}
		}	
	}
	cout << "\nScores ordered high to low: ";
	for (int k = 0; k < size; k++)
	{
		cout << array[k] << " ";
	}
	
}

int findMax(int array[], int size)
{
	int Max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > Max)
			Max = array[i];
	}
	return Max;
}

int findMin(int array[], int size)
{
	int Min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < Min)
			Min = array[i];
	}
	return Min;
}

double findAvg(int array[], int size)
{
	int sum = 0;
	double average;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	average = (double)sum / (double)size;
	return average;
}
