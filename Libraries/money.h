#include <iostream>
#include "Stocks.h"


class Money{
private:
double amount;
bool availabe;
std::string currency_type;

public:
//constructor
Money (double cash,std::string currency){
    amount = cash;
    currency_type = currency;
    availabe = false;
}

void SetCash(double money){
    amount = money;
}
double GetCash(){
    return amount;
} 
void SetCurrency(std::string type){
    currency_type = type; // USD, Euros ,etc.
}
std::string GetCurrency(){
    return currency_type;
} 

void DepositMoney(double deposit){
    amount = deposit + amount;
    
        std::cout << "Deposit of " << deposit <<  "Completed\n";
}
void WithdrawMoney(double withdrawl){
    if(withdrawl > amount){
        std::cout << "No money available \n";
    }
    else{
        amount = amount - withdrawl;
        std::cout << "Withdraw Completed of " << withdrawl << " \n" << "Current Balance of Account is "<< amount << "\n";
    }
}

};
