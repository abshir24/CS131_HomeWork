/*
 Abshir Mohamed
 7-3-2018
 HW2
 */


#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    const float sugar = 1.5/48.0, butter = 1.0/48.0, flour = 2.75/48.0;
    
    int cookies;
    
    cout<<"How many cookies do you want to make?"<<endl;
    
    cin>> cookies;
    
    cout<<"Your ingredients are:"<<endl;
    
    cout<<setprecision(2)<<fixed<<sugar*cookies<<" cups of sugar"<<endl;
    
    cout<<setprecision(2)<<fixed<<butter*cookies<<" cups of butter"<<endl;
    
    cout<<setprecision(2)<<fixed<<flour*cookies<<" cups of flour"<<endl;
    
    
    return 0;
}




