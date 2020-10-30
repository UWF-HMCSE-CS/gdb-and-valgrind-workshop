#include <iostream>
#include "account.hpp"

void printAccount(Account* account)
{
    std::cout << account->computeInterest() << std::endl;
    std::cout << account->getBalance() << std::endl;
}

void createAndPrintSingleAccount()
{
    Account* newAccount = new Account();
    newAccount->depositAmount(20);
    newAccount->setInterestRate(0.06);
    newAccount->changeOverdraftLimit(10);

    newAccount->withdrawAmount(30);

    printAccount(newAccount);
}

void createAndPrintMultipleAccounts()
{
    Account** accounts = new Account*[2];

    accounts[0] = new Account();
    accounts[0]->depositAmount(20);
    accounts[0]->setInterestRate(0.06);
    accounts[0]->changeOverdraftLimit(10);

    accounts[1] = new Account();
    accounts[1]->depositAmount(50);
    accounts[1]->setInterestRate(0.12);
    accounts[1]->changeOverdraftLimit(10);

    for(int i = 0; i <= 2; ++i)
    {
        accounts[i]->withdrawAmount(40);
        printAccount(accounts[i]);
    }
}

int main() 
{
    createAndPrintSingleAccount();
    //createAndPrintMultipleAccounts();
    return 0;
}