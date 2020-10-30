#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

class Account {
    private:
        float currentBalance;
        float interestRate;
        float overdraftLimit;

        bool withdrawIsPossible(float amount);
    public:
        Account();

        float getBalance();
        float computeInterest();

        void depositAmount(float amount);
        bool withdrawAmount(float amount);
        void setInterestRate(float rate);
        void changeOverdraftLimit(float limit);
};

#endif