#include <iostream>
using namespace std;
int main() {
	int numSub;
	char char1, char2;
	int price;

	cout << "Enter the number of subjects in the portrait: ";
	cin >> numSub;

	switch (numSub)
	{
	case 1:
		price = 100;
		cout << "Do you want a fancy background (y/n)? ";
		cin >> char1;
		cout << "Do you want an appointment date (y/n)? ";
		cin >> char2;
		if (char1 == 'y' && char2 == 'y') cout << "The total price is $" << price * 1.2;
		else
			if (char1 == 'n' && char2 == 'n') cout << "The total price is $" << price;
			else cout << "The total price is $" << price * 1.1;
		break;

	case 2:
		price = 130;
		cout << "Do you want a fancy background (y/n)? ";
		cin >> char1;
		cout << "Do you want an appointment date (y/n)? ";
		cin >> char2;
		if (char1 == 'y' && char2 == 'y') cout << "The total price is $" << price * 1.2;
		else
			if (char1 == 'n' && char2 == 'n') cout << "The total price is $" << price;
			else cout << "The total price is $" << price * 1.1;
		break;

	case 3:
		price = 150;
		cout << "Do you want a fancy background (y/n)? ";
		cin >> char1;
		cout << "Do you want an appointment date (y/n)? ";
		cin >> char2;
		if (char1 == 'y' && char2 == 'y') cout << "The total price is $" << price * 1.2;
		else
			if (char1 == 'n' && char2 == 'n') cout << "The total price is $" << price;
			else cout << "The total price is $" << price * 1.1;
		break;

	case 4:
		price = 160;
		cout << "Do you want a fancy background (y/n)? ";
		cin >> char1;
		cout << "Do you want an appointment date (y/n)?";
		cin >> char2;
		if (char1 == 'y' && char2 == 'y') cout << "The total price is $" << price * 1.2;
		else
			if (char1 == 'n' && char2 == 'n') cout << "The total price is $" << price;
			else cout << "The total price is $" << price * 1.1;
		break;

	default: price = 165;
		cout << "Do you want a fancy background (y/n)? ";
		cin >> char1;
		cout << "Do you want an appointment date (y/n)?";
		cin >> char2;
		if (char1 == 'y' && char2 == 'y') cout << "The total price is $" << price * 1.2;
		else
			if (char1 == 'n' && char2 == 'n') cout << "The total price is $" << price;
			else cout << "The total price is $" << price * 1.1;
		break;
	}
	return 0;
}