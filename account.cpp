#include "account.hpp"

Account::Account() 
{
    this->currentBalance = 0;
    this->interestRate = 0;
    this->overdraftLimit = 0;
}

float Account::getBalance() 
{
    return this->currentBalance;
}

float Account::computeInterest()
{
    return this->currentBalance * this->interestRate;
}

void Account::depositAmount(float amount)
{
    this->currentBalance += amount;
}

bool Account::withdrawAmount(float amount)
{
    if(withdrawIsPossible(amount))
    {
        this->currentBalance -= amount;
        return true;
    }

    return false;
}

bool Account::withdrawIsPossible(float amount)
{
    return (this->overdraftLimit + this->currentBalance - amount) > 0;
}

void Account::setInterestRate(float rate)
{
    this->interestRate = rate;
}

void Account::changeOverdraftLimit(float limit)
{
    this->overdraftLimit = limit;
}