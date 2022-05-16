#include <iostream>
#include "Account.h"

using namespace std;

int main() {

	Account account1{ "Mark" }; // Testing the new explicit single-parameter constructor
	Account account2{ "Robert" };

	cout << "Account1 username is " << account1.getName() << endl;
	cout << "Account2 username is " << account2.getName() << endl;

}