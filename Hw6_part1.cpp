#include<iostream>
using namespace std;

double num1, num2;
int choice;

double subtraction()
{
	return num1 - num2;
}

double sum()
{
	return num1 + num2;
}

void getNumbers()
{
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
}

void getChoice()
{
	cout << "Enter your choice, 1 for Subtraction or 2 for Addition: ";
	cin >> choice;
	while (choice != 1 && choice != 2)
	{
		cout << "Error, please only enter 1 or 2\n";
		cout << "Enter your choice, 1 for Subtraction or 2 for Addition: ";
		cin >> choice;
	}
}

int main()
{
	getChoice();
	getNumbers();
	if (choice == 1) cout << "\nThe result is " << subtraction();
	else if (choice == 2) cout << "\nThe result is " << sum();
	return 0;
}



