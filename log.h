#include <iostream>
#include <fstream>


class log{
private:
std::string logfilename = "LogPortfolioStats.txt";
std::ofstream myfile;
bool isOpen;
public:

log(){ // __init__ 
   myfile.open(logfilename);
    isOpen = true;
}
void openlog(){
isOpen = true;
myfile.open(logfilename);
}

void closelog(){
    isOpen = false;
    myfile.close();
}

void writelog(std::string Write){
    if(isOpen){
    myfile << Write;
    }
    else{
        openlog();
        myfile << Write;
    }
}

};