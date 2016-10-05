#include "bank.h"
#include <iostream>

Bank::Bank() {
	currentAccount = nullptr;
}

void Bank::AddAccount(int id) {
	bool found = false;
	for (int i = 0; i < accounts.size(); i++)
	{
		if(accounts[i].GetId() == id)
			found = true;
	}

	if(found) //if statement only executes when true, unless !found or found == false
		std::cout << "An account already exists with the iD " << id << std::endl;
	else
	{
		accounts.push_back(Account(id));
		std::cout << "Account added!" << std::endl;
	}
}

void Bank::RemoveAccount(int id) {
	int found = -1;
	for (int i = 0; i < accounts.size(); i++)
	{
		if (accounts[i].GetId() == id)
			found = i;
	}

	if (found != -1)
	{
		if (currentAccount->GetId() == id)
			currentAccount = nullptr;
		accounts.erase(accounts.begin() + found);
		std::cout << "Account" << id << "has been removed!" << std::endl;
	}

	else
		std::cout << "Account not found." << std::endl;
}

void Bank::SetCurrentAccount(int id) {
	bool found = false;
	for (int i = 0; i < accounts.size(); i++)
	{
		if(accounts[i].GetId() == id)
		{	
			currentAccount = &accounts[i];
			found = true;
			std::cout << "Account set." << std::endl;
		}
	}
	if (!found)
	{
		std::cout << "Account not found." << std::endl;
		currentAccount = nullptr;
	}
}

void Bank::DepositMoney(double money) {
	if (currentAccount != nullptr)
		currentAccount->DepositMoney(money);
	else
		std::cout << "You're not currently in your account!" << std::endl;
}

void Bank::WithdrawMoney(double money) {
	if (currentAccount != nullptr)
		currentAccount->WithdrawMoney(money);
	else
		std::cout << "You're not currently in your account!" << std::endl;
}

void Bank::CheckBalance() {
	if (currentAccount != nullptr)
		std::cout << "$" << currentAccount->CheckBalance() << std::endl;
	else
		std::cout << "You're not currently in your account!" << std::endl;
}