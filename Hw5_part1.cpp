#include <iostream>
using namespace std;
int main() {
	int counter, lines;

	cout << "(i)\n";
	for (counter = 1; counter <= 10; counter++)
		cout << "*";
	
	cout << "\n\n(ii)\n";
	for (counter=1; counter <= 20; counter++)
		cout << "*";

	cout << "\n\n(iii)";
	for (lines=1;lines<=10;lines++)
	{
		cout << endl;
		for (counter = 1; counter <= lines; counter++)
			cout << "*" ;
	}

	cout << "\n\n(iv)";
	for (lines = 1; lines <= 20; lines++)
	{
		cout << endl;
		for (counter = 1; counter <= lines; counter++)
			cout << "*";
	}

	cout << "\n\n(v)";
	for (lines = 10; lines >= 1; lines--)
	{
		cout << endl;
		for (counter = 10; counter >= lines; counter--)
			cout << "*";
	}

	cout << "\n\n(vi)";
	for (lines = 20; lines >= 1; lines--)
	{
		cout << endl;
		for (counter = 20; counter >= lines; counter--)
			cout << "*";
	}
	cout << endl;
	return 0;
} 


