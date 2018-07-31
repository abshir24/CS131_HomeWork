/*
 Abshir Mohamed
 7-11-2018
 HW3
 */


#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int month,year,days;
    
    char leap;

    cout<<"Enter a month (1-12): "<<endl;
    cin>>month;

    while(month<1 || month > 12)
    {
        cout<<"Month cannot be less than 1 or greater than 12: "<<endl;
        cout<<"Enter a month (1-12): "<<endl;
        cin>>month;
    }

    cout<<"Enter a year: "<<endl;
    cin>>year;

    while(year<1)
    {
        cout<<"Year cannot be less than 1"<<endl;
        cout<<"Enter a year: "<<endl;
        cin>>year;
    }

    if(year%100 == 0)
        if(year%400 == 0)
            leap ='Y';
        else
            leap = 'N';
    else if(year%4==0)
        leap = 'Y';
    else
        leap = 'N';
    
    if(month == 2 && leap == 'Y')
        days = 29;
    else if(month ==2 && leap == 'N')
        days = 28;
    else if(month%2 == 0)
        days = 30;
    else
        days = 31;
    
    cout<< days<<" days"<<endl;

    return 0;
}




