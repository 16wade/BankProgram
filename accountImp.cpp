#include "account.h"
#include <iostream>

Account::Account(int id) {
	this -> id = id;
	balance = 0.00;
}

void Account::DepositMoney(double depositAmount) {
	balance = balance + depositAmount;
	std::cout << "You have deposited $" << depositAmount << std::endl;
	std::cout << "Your new balance is: $" << balance << std::endl;
}

void Account::WithdrawMoney(double withdrawAmount) {
	balance = balance - withdrawAmount;
	std::cout << "You have withdrawn $" << withdrawAmount << std::endl;
	std::cout << "Your new balance is: $" << balance << std::endl;
}

double Account::CheckBalance() {
	return balance;
}

int Account::GetId() {
	return id;
}