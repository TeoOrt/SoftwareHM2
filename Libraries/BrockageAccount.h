#include <iostream>


class Account{
private:
  std::string AccountName;
  float AccountBalance;
  
public:
    Account (){
        AccountName = "Default";
        AccountBalance = 0.0;
    }
 void SetAccountName (std::string Name){
    AccountName =Name;
 }
std::string GetAccountName() {
    return AccountName;
}
void SetBalance (float Balance){
    AccountBalance= Balance;
}
float GetBalance (){
    return AccountBalance;
}
void DepositToAccount(float add){
    if (add < 0){
        throw std::invalid_argument("Bank Account:Negative or Invalid Deposit try again");
   }
    else{
    AccountBalance = AccountBalance + add;
    }
}
void WithdrawlToAccount(float withdrawl){
    if (AccountBalance< withdrawl){
        throw std::invalid_argument("Bank Accout:Invalid Withdrawl \n");
    }
    else{
    AccountBalance = AccountBalance - withdrawl;
    }
}

void PrintStatement(){
    std::cout << "Account Information for User: \n" << AccountName << "\n";
    std::cout << "Account Balance is: " << AccountBalance << " \n"; 
}

};