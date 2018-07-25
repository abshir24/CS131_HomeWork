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

void roots(int,int,int);

int main(){
    int a,b,c;
    
    cout<<"Please enter numbers to input into quadratic formula a,b,c"<<endl;
    
    cin>>a>>b>>c;
    
    while(((pow(b,2)-(4*a*c))<0) || a==0){
        
        if((pow(b,2)-(4*a*c))<0) cout<<"Your inputs won't have a real root"<<endl;
        
        if(a==0) cout<<"a cannot be zero! This will not be a quadratic equation."<<endl;
        
        cout<<"Please enter numbers to input into quadratic formula a,b,c"<<endl;
        
        cin>>a>>b>>c;
    }
 
    
    roots(a,b,c);
    
    return 0;
    
}

void roots(int a,int b, int c)
{
    double squareBody = pow(b,2)-(4*a*c), bottom = 2*a,
    
    plus = ((b*-1)+sqrt(squareBody))/bottom,
    
    minus = ((b*-1)-sqrt(squareBody))/bottom;
    
    cout<<"Your two solutions are "<< plus << " and " << minus <<endl;
    
}



