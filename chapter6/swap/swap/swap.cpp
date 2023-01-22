#include <iostream>
using namespace std;

void badSwap(int x, int y);
void goodSwap(int& x, int& y);
int main()
{
	int myScore = 150;
	int yourScore = 1000;
	badSwap(myScore, yourScore);
	cout << myScore << "\n";
	cout << yourScore << "\n";
	goodSwap(myScore, yourScore);
	cout << myScore << "\n";
	cout << yourScore << "\n";
	return 0;
}

void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}