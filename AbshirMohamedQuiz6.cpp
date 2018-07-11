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
    string password = "coolbeans",userPassword;
    
    cout<<"Welcome to security system! Please enter your password: "<<endl;
    
    cin>>userPassword;
    
    if(userPassword == password)
        cout<<"Congratulations! Access granted!\nYou will be driected to homepage shortly..."<<endl;
    else
        cout<<"Sorry,wrong code. \nAccess denied. \nPlease try again."<<endl;
    
    
    return 0;
}




