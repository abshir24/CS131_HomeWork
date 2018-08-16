/*
 Abshir Mohamed
 8-13-2018
 HW6
 */

#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
#include <iostream>

using namespace std;



int main()
{
    long empId[7] = {5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    
    int hours[7], numHours;
    
    double payRate[7], grossWages[7], pay;
    
    for(int i = 0;i<7;i++)
    {
        cout<<"Enter information for employee #"<<empId[i]<<endl;
        
        do{
            cout<<"Enter a pay rate for this employee (Pay must not be less than $15.00)"<<endl;
            
            cin>>pay;
        }while(pay<15.00);
    
        payRate[i] = pay;
        
        do{
            cout<<"Enter the number of hours for this employee (hours must not be less than 0)"<<endl;
            
            cin>>numHours;
        }while(numHours<0);
        
        hours[i] = numHours;
        
        grossWages[i] = (pay*static_cast<double>(numHours));
        
    }
    
    for(int i = 0;i<7;i++)
        cout<<"The gross pay for employee #"<< empId[i] <<" is $"<< setprecision(2)<<fixed<<grossWages[i]<<endl;
    
    
    return 0;
}





