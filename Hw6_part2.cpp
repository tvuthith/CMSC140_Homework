#include <iostream>
#include <cstdlib>
using namespace std;

int choice,payment;
double price, quantity, purchase;


void showMenu()
{
	cout << "**** Vending Machine ****\n"
		<< " 1. Coke     $1.25\n"
		<< " 2. Pepsi    $1.00\n"
		<< " 3. Water    $2.00\n"
		<< " 4. Coffee   $1.50\n"
		<< " 5. Exit menu\n";
}

void Choice()
{
	cout << "\nEnter your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1: price = 1.25;
		break;
	case 2: price = 1.00;
		break;
	case 3: price = 2.00;
		break;
	case 4: price = 1.50;
		break;
	case 5: exit(0);
		break;
	default:
		while (choice < 1 || choice > 5)
	    {
			cout << "Error!! Please enter your choice of 1-5.\n";
			cout << "\nEnter your choice: ";
			cin >> choice;
	    }
	}		
}

double takePurchase()
{
	cout << "How many do you want: ";
	cin >> quantity;
	purchase = quantity * price;
	return purchase;
}

double tax()
{
	return (quantity * price * 6) / 100;
}

int takePayment()
{
	cout << "What is your payment: ";
	cin >> payment;
	return payment;
}

double change()
{
	return (double)payment - (purchase + tax());
}

int main()
{
	showMenu();
	Choice();
	takePurchase();
	takePayment();
	cout << "Tax amount: $" << tax() << endl;
	cout << "\nTotal purchase: $" << purchase + tax() << endl;
	cout << "\nChange: $" << change();
	return 0;
}


