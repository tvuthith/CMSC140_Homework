#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	ifstream inputfile;
	ofstream outputfile;
	string Name, Number, Address, information;

	cout << "Enter your name: ";
	getline(cin, Name);
	cout << "Enter your phone number: ";
	getline(cin, Number);
	cout << "Enter your address (street, city, state, zipcode): ";
	getline(cin, Address);

	outputfile.open("list.txt");
	outputfile << "Name: " << Name << endl
		<< "Phone number: " << Number << endl
		<< "Address: " << Address << endl;

	outputfile.close();

	cout << "***********************************************\n";
	
	inputfile.open("list.txt");
	if (inputfile)
	{
		while (getline(inputfile,information))
		{
			cout << information<<endl;
		}
		inputfile.close();
	}
	else
	{
		cout << "Can't open file";
	}

	return 0;

}
