#include <iostream>
using namespace std;

void largerThanN(int array[], int size, int n)
{
	cout << "The numbers that are greater than " << n << " are: ";
	for (int i = 0; i < size; i++)
	{
		if (array[i] > n) cout << array[i] << " ";
	}
}

int main()
{
	int n;
	int numbers[10] = { 30,20,50,2,-1,44,3,12,90,32 };
	cout << "Please enter a number: ";
	cin >> n;
	largerThanN(numbers, 10, n);
	return 0;
}