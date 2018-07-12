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
    float weight, height, BMI;
    
    cout<<"What is your weight?"<<endl;
    
    cin>>weight;
    
    cout<<"What is your height?"<<endl;
    
    cin>>height;
    
    height *= 12;
    
    BMI = weight * (703/pow(height,2));
    
    cout<<BMI<<endl;
    
    if(BMI < 18.5)
        cout<<"You are underweight"<<endl;
    else if(BMI>25)
        cout<<"You are overweight"<<endl;
    else
        cout<<"Your weight is optimal"<<endl;
    
    return 0;
}




