/*
 Abshir Mohamed
 7-30-2018
 HW5
 */


#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;

void kineticEnergy(float,float);

int main()
{
    float mass,velocity;
    
    cout<<"Enter mass and velocity of an object"<<endl;
    
    cin>>mass;
    
    cin>>velocity;
    
    kineticEnergy(mass,velocity);
    

    return 0;
    
}



void kineticEnergy(float m,float v)
{
    float KE = (1.0/2.0)*m*pow(v,2);
    
    cout<<"The kinetic energy of this object is "<< KE<<endl;
}



