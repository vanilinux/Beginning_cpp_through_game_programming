﻿#include <iostream>
using namespace std;

class Critter
{
public:
	int m_Hunger;
	Critter(int Hunger = 0);
	void Greet();
};
Critter::Critter(int hunger) 
{
	cout << "A new critter has been born!" << "\n";
	m_Hunger = hunger;
}
void Critter::Greet()
{
	cout << "Hi, I'm a critter. My hunger level is " << m_Hunger << "\n";
}

int main()
{
	Critter crit(7);
	crit.Greet();
	return 0;
}


