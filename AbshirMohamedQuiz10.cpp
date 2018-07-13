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
    float length,width;
    
    char option;
    
    cout<<"Please enter a length and width"<<endl;
    cin>>length>>width;
    
    cout<<"Please choose from the following A)Area B)Perimeter C)Both"<<endl;
    cin>>option;
    
    switch (option)
    {
        case 'a':
        case 'A':
            cout << "You entered A.\n";
            cout<<"The area of the rectangle is " << length * width<<endl;
            break;
        
        case 'b':
        case 'B':
            cout << "You entered B.\n";
            cout<<"The perimeter of the rectangle is " << (length*2)+(width*2)<<endl;
            break;
        
        case 'c':
        case 'C':
            cout << "You entered C.\n";
            cout<<"The area of the rectangle is " << length * width<<endl;
            cout<<"The perimeter of the rectangle is " << (length*2)+(width*2)<<endl;
            break;
        default:
            cout << "You did not enter A, B, or C!\n";
            break;
    }
    
    return 0;
}




