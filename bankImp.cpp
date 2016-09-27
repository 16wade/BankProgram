#include "bank.h"
#include "account.h"
#include <iostream>

Bank::Bank() {
	CurrentAccount = null;
}

void Bank::AddAccount(int id) {
	bool found = false;
	for (int i = 0; i < accounts.size(); ++i)
	{
		if(accounts[i].GetId() == id)
			found = true;
	}

	if(found) //if statement only executes when true, unless !found or found == false
		std::cout << "An account already exists with the iD " << id << std::endl;
	else
	{
		accounts.push_back(new Account(id));
		std::cout << "Account added!" << std::endl;
	}
}