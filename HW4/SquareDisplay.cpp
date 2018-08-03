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
    int num;
    
    do{
        cout<<"Enter a number between 1 and 15 (No negative values)"<<endl;
        
        cin>>num;
    }while(num<0 || num>15);
    
    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<=num;j++)
            cout<<'X';
        cout<<endl;
    }
    
    
    
    return 0;
    
}





