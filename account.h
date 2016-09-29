class Account {
public:
	void DepositMoney(double depositAmount);
	void WithdrawMoney(double withdrawAmount);
	double CheckBalance();
	Account(int id);
	int GetId();

private:
	double balance;
	int id;
};