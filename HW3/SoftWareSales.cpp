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
    float Q,price = 99.0;
    
    cout<<"How many units were sold?" << endl;
    cin>> Q;
    
    if(Q<0)
        cout<<"Please enter a valid quantity"<<endl;
    else if(Q<20)
        cout<<"The total units sold were: "<< Q*(99.0*.2)<<endl;
    else if(Q<50)
        cout<<"The total units sold were: "<< Q*(99.0*.3)<<endl;
    else if(Q<100)
        cout<<"The total units sold were: "<< Q*(99.0*.4)<<endl;
    else
        cout<<"The total units sold were: "<< Q*(99.0*.5)<<endl;
    
    return 0;
}




