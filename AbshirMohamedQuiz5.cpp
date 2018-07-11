/*
 Abshir Mohamed
 6-27-2018
 HW1
 */


#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    const float classA = 15.123, classB = 12.24, classC = 9.985;
    
    float Aclass,Bclass,Cclass;
    
    cout<<"How many tickets were sold for Class A seats?"<<endl;

    cin>>Aclass;

    cout<<"How many tickets were sold for Class B seats?"<<endl;

    cin>>Bclass;

    cout<<"How many tickets were sold for Class C seats?"<<endl;

    cin>>Cclass;
    
    cout<<right<<setw(20)<<"Unit Price"<<setw(20)<<"Num_Sold"<<setw(20)<<"Total"<<endl;
    
    cout<<"-------------------------------------------------------------------"<<endl;
    
    cout << setprecision(2) << fixed <<"Class A" << setw(10)<< classA<< setw(20) << Aclass << setw(23)<< classA*Aclass <<endl;
    
    cout << setprecision(2) << fixed <<"Class B" << setw(10)<< classB<< setw(20) << Bclass << setw(23)<< classB*Bclass <<endl;
    
    cout << setprecision(2) << fixed <<"Class C" << setw(10)<< classC<< setw(20) << Cclass << setw(23)<< classC*Cclass <<endl;
    
    return 0;
}




