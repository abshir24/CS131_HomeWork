/*
 Abshir Mohamed
 7-24-2018
 HW4
 */


#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;


int main(){
    int days;
    
    float total = 0,pennies=.01;
    
    do{
        cout<<"How many days would like this program to run for. (Don't enter any negative numbers"<<endl;
        
        cin>>days;
    }while(days<0);
    
    for(int i = 1;i<=days;i++)
    {
        total+=pennies;
        
        pennies*=2;
        
        cout<<"Day " << i << ": $"<<setprecision(2)<<fixed<<total<<endl;
        
    }
    
    cout<<"The total after " << days << " days is  $"<<setprecision(2)<<fixed<<total<<endl;
    
    return 0;
    
}





