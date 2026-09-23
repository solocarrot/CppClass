//#include "Account.h"
//#include <iostream>
//#include <cassert>
//
//using namespace std;
//
//int Account::base = 0;
//
//
//
//Account::Account(double bal) :balance(bal)
//{
//	if (bal < 0) {
//		cout << "cannot minus balance";
//		assert(false);
//	}
//	base++;
//	accNum = 100000 + base;
//
//	cout << "accountname : " << accNum << "is created" << endl;
//	cout << "balance is " << balance << endl << endl;
//}
//
//void Account::checkBalance() const
//{
//	cout << "balnce of account is " << balance << endl;
//}
//
//void Account::deposit(double amount)
//{
//	if (amount > 0.0) {
//		balance += amount;
//		cout << "now balance is " << balance << endl;
//	}
//	else {
//		cout << "no" << endl;
//	}
//}
//
//void Account::withdraw(double amount)
//{
//	if (amount > balance) {
//		amount = balance;
//		balance -= amount;
//	}
//}
//
//Account::~Account()
//{
//	cout << "account " << accNum << "is closed" << endl;
//
//}