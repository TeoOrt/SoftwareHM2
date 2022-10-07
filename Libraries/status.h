#include <iostream>


class Status{
    private:
    bool active; // check if account is on
    bool LowMoneyWarning;
    public:
    Status (){
        active = false;
        LowMoneyWarning = false;
    }
    void setStatus( bool stat){
        active = stat;
    }
    void GetWarning(double money){//  going to get from money class to set the warning
        if ( money< 1000){
            LowMoneyWarning = true;
            std::cout << "Add money to account balance is low \n" << "Current Balance is:" << money << "\n";
        }
        else{
            LowMoneyWarning = false;
        }
    }

};
