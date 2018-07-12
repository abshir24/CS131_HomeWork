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
    string color1,color2;
    
    cout<<"Enter two primary colors in lower case letters"<<endl;
    
    cin>>color1;
    
    cin>>color2;
    
    if(color1!="red" && color1!="blue" && color1 != "yellow" && color2!="red" && color2!="blue" && color2 != "yellow" )
        cout<<"One or both of these colors are not primary colors"<<endl;
    else
        if(color1 == "red" && color2 == "blue")
            cout<<"Red + Blue = Purple"<<endl;
        else if(color1 == "red" && color2 == "yellow")
            cout<<"Red + Yellow = Orange"<<endl;
        else if(color1 == "blue" && color2 == "yellow")
            cout<<"Blue + Yello = Green"<<endl;
    
    return 0;
}




