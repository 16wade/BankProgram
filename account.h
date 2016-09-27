class Account {
public:
	void DepositMoney(double depositAmount);
	void WithdrawMoney(double withdrawAmount);
	double GetBalance();
	Account(int id);
	int GetId();

private:
	double balance;
	int id;
}