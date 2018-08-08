/*
 Abshir Mohamed
 7-30-2018
 HW5
 */


#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;

bool isPrime(int);

int main()
{
    cout<<isPrime(4);
    

    return 0;
    
}



bool isPrime(int num)
{
    if(num == 0 || num == 1) return true;
    
    for(int i = 1;i<=num;i++)
        if(num%i==0 && i!=1 &&i!=num) return false;
        
    return true;
}



