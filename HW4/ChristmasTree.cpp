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
    int width = 10;
    for(int i = 1;i<=11;i+=2)
    {
        cout<<setw(width--);
        
        for(int j = 1;j<=i;j++)
            cout<<'*';
        cout<<endl;
    }
    
    
    
    return 0;
    
}





