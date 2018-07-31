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
    int checks;
    
    float startBalance,serviceFees=0;
    
    cout<<"What is your starting balance"<<endl;
    
    cin>>startBalance;
    
    if(startBalance < 0)
        cout<<"Your account is overdrawn!"<<endl;
    else{
        
        cout<<"How many checks were written?"<<endl;
        
        cin>>checks;
        
        while(checks<0)
        {
            cout<<"Checks cannot be a negative number"<<endl;
            
            cout<<"How many checks were written?"<<endl;
            
            cin>>checks;
        }
        
        if(checks < 20)
            serviceFees+= .1*checks;
        else if(checks < 40)
            serviceFees+= .08*checks;
        else if(checks < 60)
            serviceFees+= .06*checks;
        else
            serviceFees+= .04*checks;
        
        if(startBalance < 400)
            serviceFees+=15.0;
        
        startBalance -= serviceFees;
        
        cout<<"Total service fees are $"<<setprecision(2)<<fixed<<serviceFees<<endl;
        
        cout<<"Final balance is $"<<startBalance<<endl;
        
    }
    

    return 0;
}




