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
    string medium;
    
    float time,distance;
    
    cout<<"Please select air, water, or steel"<<endl;
    
    cin>>medium;
    
    if(medium != "air" && medium != "water" && medium != "steel")
        
        cout<<"You did not enter a valid medium."<<endl;
    
    else{
        
        cout<<"Please enter a distance in feet"<<endl;
        
        cin>>distance;
        
        if(distance<0)
            
            cout<<"Distance has to be greater than 0"<<endl;
        
        else{
            if(medium == "air")
                
                time = distance / 1110.0;
            
            else if(medium == "water")
                
                time = distance / 4900.0;
            
            else
                
                time = distance / 16400.0;
            
            cout<<"It will take the sound wave "<<setprecision(2)<<fixed<<time<<" seconds to go that distance"<<endl;
            
        }
        
    }
    
    
    return 0;
}




