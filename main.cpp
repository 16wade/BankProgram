#include <iostream>
#include "bank.h"

int main()
{
	std::cout << "YO WASSUPWITCHABOY! You're at Ethan's Bank!" << std::endl;
	std::cout << "Here are you options: " << std::endl;
	std::cout << "0 to exit" << std::endl;
	std::cout << "1 to add an account" << std::endl;
	std::cout << "2 to delete an account" << std::endl;
	std::cout << "3 to access your account" << std::endl;
	std::cout << "Once you've accessed your account you can: " << std::endl;
	std::cout << "4 to check your balance" << std::endl;
	std::cout << "5 to deposit money" << std::endl;
	std::cout << "6 to withdraw money" << std::endl;
	Bank myBank;
	int userChoice = -1;
	double dollarAmount = 0;
	int accountId = 0;
	while(userChoice != 0)
	{
		std::cout << "What would you like to do?" << std::endl;
		std::cin >> userChoice;
		switch(userChoice)
		{
			case 0:
				std::cout << "Thanks for visiting!" << std::endl;
				break;
			case 1:
				std::cout << "Enter an account ID" << std::endl;
				std::cin >> accountId;
				myBank.AddAccount(accountId);
				break;
			case 2:
				std::cout << "Enter an account ID" << std::endl;
				std::cin >> accountId;
				myBank.RemoveAccount(accountId);
				break;
			case 3:
				std::cout << "Enter your account ID" << std::endl;
				std::cin >> accountId;
				myBank.SetCurrentAccount(accountId);
				break;
			case 4:
				myBank.CheckBalance();
				break;
			case 5:
				std::cout << "Enter the amount of money you want to deposit" << std::endl;
				std::cin >> dollarAmount;
				myBank.DepositMoney(dollarAmount);
				break;
			case 6:
				std::cout << "Enter the amount of money you want to withdraw" << std::endl;
				std::cin >> dollarAmount;
				myBank.WithdrawMoney(dollarAmount);
				break;
			default:
				std::cout << "Invalid response" << std::endl;
				break;
		}
	}
	return 0;
}