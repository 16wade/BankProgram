#include <vector>
#include "account.h"

class Bank {
public:
	void AddAccount(int id);
	void RemoveAccount(int id);
	void DepositMoney(double money);
	void WithdrawMoney(double money);
	void CheckBalance();
	void SetCurrentAccount(int id);
	Bank();

private:
	std::vector<Account> accounts;	
	Account(0) currentAccount;
};