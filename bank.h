#include <vector>
#include "account.h"

class Bank {
public:
	void AddAccount();
	void RemoveAccount();
	void DepositMoney();
	void WithdrawMoney();
	int CheckBalance();

private:
	std::vector<Account> accounts;	
	Account currentAccount;
};