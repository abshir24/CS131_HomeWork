/*
 Abshir Mohamed
 7-30-2018
 HW5
 */
#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>

using namespace std;

double totalCharges(double,double);

double totalCharges(double,double,double,double);

int main()
{
    double totalCharge;
    char patient;
    
    do{
        cout<<"Are you an in patient or an out patient. Type 'o' for in or 'i' for out"<<endl;
        cin>>patient;
    }while(patient!= 'i' && patient != 'o' && patient !='I' && patient != 'O');
    
    
    if(patient == 'i' || patient == 'I')
    {
        double days,dailyRate,medCharges,hospitalTests;
        
        do
        {
            cout<<"Enter the number of days you stayed in the hospital. No negativ values for any of the inputs."<<endl;
            
            cin>> days;
            
            cout<<"Enter the daily rate of the hospital"<<endl;
            
            cin>> dailyRate;
            
            cout<<"Enter the hospital medication charges"<<endl;
            
            cin>> medCharges;
            
            cout<<"Enter the charges for hospital tests"<<endl;
            
            cin>> hospitalTests;
            
        }while(days < 0 || dailyRate < 0|| medCharges < 0 || hospitalTests<0 );
        
        totalCharge = totalCharges(days,dailyRate,medCharges,hospitalTests);
        
    }
    else{
        double serviceCharge,medCharges;
        
        do
        {
            cout<<"Enter the service charge for the hospital. No negative values are allowed"<<endl;
            
            cin>> serviceCharge;
            
            cout<<"Enter the hospital medication charges"<<endl;
            
            cin>> medCharges;
            
        }while(medCharges < 0 || serviceCharge < 0);
        
        totalCharge = totalCharges(serviceCharge,medCharges);
    }
    
    cout<<"Your total charges were " << setprecision(2)<<fixed<<totalCharge<<endl;
    
    return 0;
}



double totalCharges(double serviceCharge,double medCharge)
{
    return serviceCharge + medCharge;
}


double totalCharges(double days,double dailyRate,double medCharges,double hospitalTests)
{
    
    return (dailyRate*days)+medCharges+hospitalTests;
}
