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
    int employeeId;
    
    float gp,st,ft,gpt=0,stt=0,ftt=0,net=0;
    
    cout<<"Enter employee id number"<<endl;
    
    cin>>employeeId;
   
    while(!(employeeId == 0)){
        
        cout<<"Enter gross pay"<<endl;
        
        cin>>gp;
        
        cout<<"Enter state tax as a whole percentage number (ex):1"<<endl;
        
        cin>>st;
        
        cout<<"Enter federal tax as a whole percentage number (ex):1"<<endl;
        
        cin>>ft;
        
        st =gp*(st/100);
        
        ft = gp*(ft/100);
        
        if(gp<0||ft<0||st<0|| gp<(st+ft))
        {
            cout<<"Don't use any negative values for any of the inputs and"<<endl;

            cout<<"Gross pay must be greater than the sum of state tax and federal tax"<<endl;
            
            continue;
        }
        
        gpt+=gp;
        
        stt+=st;
        
        ftt+=ft;
        
        net+=(gpt-st-ft);
        
        cout<<"Enter employee id number"<<endl;
        
        cin>>employeeId;
    }
    
    cout<<"Total gross pay$"<<setprecision(2)<<fixed<<gpt<<endl;
    
    cout<<"Total federal tax is $"<<setprecision(2)<<fixed<<ftt<<endl;
    
    cout<<"Total state tax is $"<<setprecision(2)<<fixed<<stt<<endl;
    
    cout<<"Net pay is $"<<setprecision(2)<<fixed<<net<<endl;
    
    
    return 0;
}




