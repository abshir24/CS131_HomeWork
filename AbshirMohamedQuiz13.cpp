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
    int year;
    
    float membership = 2500.0, totalCost=0;
    
    for(year=0;year<=6;year++)
    {
        cout<<"Year " << year << ": $"<<setprecision(2)<<fixed<<membership<<endl;
        
        totalCost += membership;
        
        membership += (membership *.04);
        
    }
    
    cout<<"Total cost for 6 years: $"<<setprecision(2)<<fixed<<totalCost-2500.00<<endl;
    
    return 0;
}




