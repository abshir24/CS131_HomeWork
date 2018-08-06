/*
 Abshir Mohamed
 7-24-2018
 HW4
 */


#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    int maxNum, minNum,num;
    
    cout<<"Enter any integer from (-oo,oo). Enter -99 to end the program"<<endl;
    
    cin>>num;
    
    if(num == -99) cout<<"program over"<<endl;
    else{
        maxNum = num; minNum = num;
        
        while(num!=-99){
            maxNum = max(maxNum,num); minNum = min(minNum,num);
            
            cout<<"Enter any integer from (-oo,oo). Enter -99 to end the program"<<endl;
            
            cin>>num;
        }
    }
    
    cout<<"Max = " << maxNum << " Min = "<< minNum<<endl;
    
    return 0;
    
}






