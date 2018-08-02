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
    char package;
    
    float minutes,bill = 0;
    
    cout<<"Which package have you purchased A B or C"<<endl;
    
    cin>>package;
    
    cout<<"How many minutes did you use?"<<endl;
    
    cin>>minutes;
    
    switch (package)
    {
        case 'a':
        case 'A':
            bill+= 39.99;
            if(minutes>450)
                bill += (minutes - 450)*.45;
            break;
            
        case 'b':
        case 'B':
            bill+= 59.99;
            if(minutes>900)
                bill += (minutes - 900)*.40;
            break;
            
        case 'c':
        case 'C':
            bill+= 69.99;
            
            break;
        default:
            cout << "You did not enter A, B, or C!\n";
            break;
    }
    
    cout<<"Your total monthly bill is "<< bill<<endl;

    return 0;
}




