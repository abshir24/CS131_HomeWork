/*
 Abshir Mohamed
 7-24-2018
 HW4
 */


#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;


int main(){
    int year;
    
    float levels = 0;
    
    
    for(year = 1;year<=25;year++)
    {
        levels+=1.5;
        cout<<"Year " << year << ": "<<setprecision(2)<<levels<< " mm"<<endl;
    }
    
    return 0;
    
}





