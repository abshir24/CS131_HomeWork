/*
 Abshir Mohamed
 6-27-2018
 HW1
 */


#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    float principal,interestRate,interest,amountInSavings;
    int timesCompounded;
    cout<<"What is your current balance in your savings account"<<endl;
    cin>>principal;
    cout<<"What is the interest rate?"<<endl;
    cin>>interestRate;
    cout<<"How many times was the interest compounded?"<<endl;
    cin>>timesCompounded;
    interestRate = interestRate*.01;
    amountInSavings = principal*pow((1+interestRate/timesCompounded),timesCompounded);
    interest =amountInSavings-principal ;
    cout<<"Interest rate:  "<<interestRate<<" %"<<endl;
    cout<<"Times Compounded:  "<<timesCompounded<<endl;
    cout<<"Principal:  $ "<<principal<<endl;
    cout<<"Interest: $ "<<interest<<endl;
    cout<<"Amount in savings: $"<< amountInSavings<<endl;
    return 0;
}




