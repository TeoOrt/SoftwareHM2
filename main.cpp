#include <iostream>
#include <string>
#include "Stocks.h"

// Mateo Ortega
//Alfredo Chaidez
//Kevin Estrada
using namespace std;

int main(){
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
