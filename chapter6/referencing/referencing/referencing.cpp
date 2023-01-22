#include <iostream>
using namespace std;

int main()
{
	int myScore = 1000;
	int& mikesScore = myScore;
	cout << "myScore is: " << myScore << "\n";
	cout << "mikesScore is: " << mikesScore << "\n\n";
	myScore += 500;
	cout << "myScore is: " << myScore << "\n";
	cout << "mikesScore is: " << mikesScore << "\n\n";
	mikesScore += 500;
	cout << "myScore is: " << myScore << "\n";
	cout << "mikesScore is: " << mikesScore << "\n\n";
	return 0;
}