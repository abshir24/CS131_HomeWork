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
    float a,b,pi=3.14159;
    
    int number=-1;
    
    while(number!=4)
    {
      
        cout<<"1. Calculate the Area of a Circle"<<endl;
        
        cout<<"2. Calculate the Area of a Rectangle"<<endl;
        
        cout<<"3. Calculate the Area of a Triangle"<<endl;
        
        cout<<"Quit"<<endl;
        
        cout<<"Enter a number between (1-4)"<<endl;
        
        cin>>number;
        
        
        switch(number)
        {
            case 1:
                
                cout<<"Enter the radius of a circle"<<endl;
                
                cin>>a;
                
                cout<<"The area of the circle is "<<setprecision(2)<<fixed<<pi*pow(a,2)<<endl;
                
                break;
                
            case 2:
                
                cout<<"Enter the length of the rectangle"<<endl;
                
                cin>> a;
                
                cout<<"Enter the width of the rectangle"<<endl;
                
                cin>> b;
                
                cout<<"The area of the rectangle is "<<setprecision(2)<<fixed<<a*b<<endl;
                
                break;
                
            case 3:
                
                cout<<"Enter the base of the triangle"<<endl;
                
                cin>> a;
                
                cout<<"Enter the height of the triangle"<<endl;
                
                cin>> b;
                
                cout<<"The area of the triangle is "<<setprecision(2)<<fixed<<a*b*0.5<<endl;
                
                break;
                
            case 4:
                cout<<"Program is over"<<endl;
                
                break;
                
            default:
                cout<<"Enter a valid number between 1-4"<<endl;
                
                break;
                
                
        }
    }
    
    
    

    return 0;
}




