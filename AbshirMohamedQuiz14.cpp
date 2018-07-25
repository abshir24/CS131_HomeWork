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
    int years;
    float totalRain=0,inches,average;
    
    cout<<"How many years?"<<endl;
    
    cin>>years;
    
    while(years<1)
    {
        cout<<"Years cannot be less than 1?"<<endl;
        cout<<"How many years?"<<endl;
        cin>>years;
    }
    for(int i = 0;i<years;i++)
        for(int j = 0;j<12;j++)
        {
            cout<<"How many inches of rainfall for month "<<j+1<<"?"<<endl;
            cin>>inches;
            
            while(inches<0)
            {
                cout<<"Inches cannot be a negative number?"<<endl;
                cout<<"How many inches of rainfall for the month"<<endl;
                cin>>inches;
            }
            totalRain+=inches;
        }

    average = totalRain/(12.0*static_cast<float>(years));
    
    cout<<years*12<<" months"<<endl;
    cout<<totalRain<<" total inches of rainfall"<<endl;
    cout<<average<<" average rainfall per month"<<endl;
    
    
    return 0;
    
}




