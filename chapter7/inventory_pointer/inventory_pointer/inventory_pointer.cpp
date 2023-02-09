#include <iostream>
#include <string>
#include <vector>
using namespace std;
string* ptrToElement(vector<string>* const pVec, int i);
int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	cout << *(ptrToElement(&inventory, 0)) << "\n\n";
	cout << "assigning the returned pointer to another pointer.\n";
	string* pStr = ptrToElement(&inventory, 1);;
	cout << *pStr << "\n\n";
	cout << "assigning object pointed to by another pointer to a string object.\n";
	string str = *(ptrToElement(&inventory, 2));
	cout << str << "\n\n";
	cout << "altering an object through a returned pointer.\n";
	*pStr = "Healing potion";
	cout << inventory[1] << endl;
	return 0;
}
string* ptrToElement(vector<string>* const pVec, int i)
{
	return &((*pVec)[i]);
}

