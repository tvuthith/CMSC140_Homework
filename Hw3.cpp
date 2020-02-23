#include <iostream>
#include <string>
using namespace std;
int main() {
	string stuName;
	int participationScore, testScore, assignmentScore, examScore, practiceScore, finalScore;

	cout << "Enter student's name: ";
	getline(cin, stuName);
	cout << "Enter Class Participation Score ranging from 0 to 100: ";
	cin >> participationScore;
	cout << "Enter test score ranging from 0 to 100: ";
	cin >> testScore;
	cout << "Enter assignment score ranging from 0 to 100: ";
	cin >> assignmentScore;
	cout << "Enter exam score ranging from 0 to 100: ";
	cin >> examScore;
	cout << "Enter practice Score ranging from 0 to 100: ";
	cin >> practiceScore;
	finalScore = participationScore + testScore + assignmentScore + examScore + practiceScore;
	cout << stuName << ": " << "  Final score:  " << finalScore << " Average Score: " << static_cast<double>(finalScore) / 5;
	return 0;
}