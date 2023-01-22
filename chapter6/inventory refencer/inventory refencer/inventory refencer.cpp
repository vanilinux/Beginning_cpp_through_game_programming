#include <iostream>
#include <string>
#include <vector>
using namespace std;

string& refToElement(vector<string>& inventory, int i);
int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout << "sending the returned reference to cout:\n";
	cout << refToElement(inventory, 0) << "\n\n";

	cout << "assigning the returned reference to another reference.\n";
	string& rStr = refToElement(inventory, 1);
	cout << "sending the new reference to cout:\n";
	cout << rStr << "\n\n";

	cout << "assigning the returned reference to а string object.\n";
	string str = refToElement(inventory, 2);
	cout << "sending the new string object to cout:\n";
	cout << str << "\n\n";

	cout << "altering an object through а returned reference. \n";
	rStr = "healing potion"; 
	cout << "sending the altered object to cout:\n";
	cout << inventory[1] << endl;
	return 0;
}

string& refToElement(vector<string>& vec, int i)
{
	return vec[i];
}