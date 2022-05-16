#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {

	Account myAccount; 

	cout << "Initial account username is " << myAccount.getName();

	cout << "\n  Please enter the account username: ";
	string theName;
	getline(cin, theName);
	myAccount.setName(theName);

	cout << "\n Name in myAccount is: " << myAccount.getName() << endl;

}