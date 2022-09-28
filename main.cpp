#include <iostream>
#include <string>
#include "Stocks.h"
#include "log.h"

// Mateo Ortega
//Alfredo Chaidez
//Kevin Estrada
using namespace std;


int main(){
    float Balance  = 50.0;
    float Add;
    string Name = "Mateo Ortega";
    string AccountOperations;
    string CommandList = "Statement = Check Account Statement\nDeposit = Deposit Money \n Withdrawl = Withdraw Money \n Purchase = Purchase Stock\n Balance = Total Value of Stocks \n StockInfo =  Check The Stock Information You are purchasing \n";

    log LogErrors;
    LogErrors.writelog("Mateo");
    LogErrors.closelog();

    cout << "\n" << CommandList << "\n";
    cin >> AccountOperations;

    Stock Tesla;  // Testing for Tesla Stock 
        string StockName = "Tesla";
        string StockShortName ="TSLA";
        string PurchaseDate = "09/11/2022";
        string CurrentDate = "09/11/2022";
        float StockValue = 299.68;
        double MarketCap;
        MarketCap = 939.04 * (10e6);
        float DivYield =0;




    int i = 0;
    Portfolio MateosPort;
    int numstocks;
    MateosPort.SetAccountName(Name);
    MateosPort.SetBalance(Balance);
    MateosPort.SetStockStats(StockName,StockShortName,StockValue,MarketCap,DivYield
    ,CurrentDate);
    MateosPort.setPortfolioBalance( i =0);
    while(AccountOperations != "Stop"){
        
        if(AccountOperations == "Deposit"){
            cin >> Add;
            MateosPort.DepositToAccount(Add);
        }
        else if(AccountOperations == "Statement"){
             MateosPort.PrintStatement();   
        }
        else if(AccountOperations == "Withdrawl"){
            cin >> Add;
            MateosPort.WithdrawlToAccount(Add);
        }
        else if(AccountOperations == "Purchase"){
            cin >> numstocks;
            MateosPort.StockPurchase(numstocks);

        }
        else if(AccountOperations == "Balance"){
            MateosPort.Balance();
        }
        else if(AccountOperations == "StockInfo"){
            MateosPort.StockInfo();
        }
        else{
            cout << "Try again \n" << CommandList << "\n";
        }



      cin >> AccountOperations;
    }
}


int juan(){
//Account class
Account Phillip;
string UserName = "Phillip";
float Balance = 50000.0;

cout << "Default account name: " << Phillip.GetAccountName() ;
cout <<"\nDefault Account Balance: "<< Phillip.GetBalance() <<"\n";

Phillip.SetAccountName(UserName);
Phillip.SetBalance(Balance);

Phillip.PrintStatement();
/**************************************/
char Mateo[100];
cin >> Mateo;
Stock Tesla;
        string StockName = "Tesla";
        string StockShortName ="TSLA";
        string PurchaseDate = "09/11/2022";
        string CurrentDate = "09/11/2022";
        float StockValue = 299.68;
        double MarketCap;
        MarketCap = 939.04 * (10e6);
        float DivYield =0; 
        //Setting up for later
        //printing out default values

        Tesla.StockInfo();
        Tesla.SetStockStats(StockName,StockShortName, StockValue,MarketCap,DivYield,PurchaseDate);
        Tesla.StockInfo();


        
/**************************************/
cin >> Mateo;
Money Dollars;
double CashAmount = 23000;
string MoneyType = "Euros";
cout << "Default Money class:\n";
Dollars.getMoneyInfo();

Dollars.SetCash(CashAmount);
Dollars.SetCurrency(MoneyType);

Dollars.getMoneyInfo();

cin >> Mateo;
Status MateoStatus;
MateoStatus.GetWarning(CashAmount);
cout << "The account is:" << MateoStatus.GetStatus() << "\n";
MateoStatus.setStatus(true);
cout << "The account is:" << MateoStatus.GetStatus() << "\n";


Analysis AlfredoAccount(true);

cout << "\nself worth is:" <<AlfredoAccount.getAnalysis()<< "\n";
AlfredoAccount.setWorth(false);
cout << "\nself worth is:" <<AlfredoAccount.getAnalysis() <<"\n";

cin >> Mateo;
Buy Apple(300.0);

cout << "Default Stokc Price is:" << Apple.stockPrice() << "\n";
Apple.setPrice(500.0);
cout << "Apple Stock Price is:" << Apple.stockPrice() << "\n";

cin >> Mateo;
Sell Microsoft(0.0);

cout << "Default Stokc Price is:" << Microsoft.stockPrice() << "\n";
Microsoft.setPrice(1500.0);
cout << "Microsoft Stock Price is:" << Microsoft.stockPrice() << "\n";


Profits KevinProfitfs(0.0);
cin >> Mateo;
cout << "Kevin's default profits are:" << KevinProfitfs.getProf() << "\n";

KevinProfitfs.setProf(3000.0);
cout << "Kevin's profits are:" << KevinProfitfs.getProf() << "\n";


History KevinHistory(0.0);

cin >> Mateo;
cout << "Kevin's default number of transactions  are:" << KevinHistory.gettrans() << "\n";

KevinHistory.settrans(3005.0);
cout << "Kevin's number of transactions are:" << KevinHistory.gettrans() << "\n";


Dates KevinDates;

cin >> Mateo;

cout << "Kevin's default date is:" << KevinDates.GetDate() << "\n";

KevinDates.SetDate("Sep 21, 2022");

cout << "Kevin's current date is:" << KevinDates.GetDate() << "\n";


//Time CurrentTime("Mountain");

//cin >>Mateo;


//cout << "Current time is: " << CurrentTime.GetTime() << "\n";


    return 0;
}
  