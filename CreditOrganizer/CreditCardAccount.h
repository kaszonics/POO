#pragma once
#include <string.h>
#include "LoyaltyScheme.h"

using namespace std;
static double interestRate;

ref class CreditCardAccount
{
public:
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	CreditCardAccount(long number, double limit);
	static CreditCardAccount();

	long GetAccountNumber();
	static int GetNumberOfAccounts();

	//literal String^ name = "Super Platinum Card";

	void RedeemLoyaltyPoints();

private:
	//initonly long accountNumber;
	long accountNumber;
	double currentBalance;
	double creditLimit;
	LoyaltyScheme^ scheme;
	static int numberOfAccounts = 0;

};