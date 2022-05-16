#include <iostream>
#include "Account.h"

using namespace std;

int main() {
	Account account1{ "Mark", 15000 };
	Account account2{ "Robert", 3000 };

	cout << "Account1: " << account1.getName() << " Balance is "
		<< account1.getBalance();
	cout << "\nAccount2: " << account2.getName() << " Balance is "
		<< account2.getBalance();

	cout << "\n\nEnter deposit amount for account1: ";
	int depositAmount;
	cin >> depositAmount;
	cout << "Adding " << depositAmount << " to account1 balance";
	account1.deposit(depositAmount);

	cout << "\n\nAccount1: " << account1.getName() << " balance is "
		<< account1.getBalance();
	cout << "\nAccount2: " << account2.getName() << " balance is "
		<< account2.getBalance();

	cout << "\n\nEnter deposit amount for account2: ";
	cin >> depositAmount;
	cout << "Adding " << depositAmount << " to account1 balance";
	account2.deposit(depositAmount);

	cout << "\nAccount1: " << account1.getName() << " balance is "
		<< account1.getBalance();
	cout << "\nAccount2: " << account2.getName() << " balance is "
		<< account2.getBalance();
}