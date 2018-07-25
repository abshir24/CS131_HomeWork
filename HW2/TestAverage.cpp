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
    float testScore,average=0;

    cout<<"Please enter 5 test scores "<<endl;
    
    cin>>testScore;
    
    average+=testScore;
    
    cin>>testScore;
    
    average+=testScore;
    
    cin>>testScore;
    
    average+=testScore;
    
    cin>>testScore;
    
    average+=testScore;
    
    cin>>testScore;
    
    average+=testScore;
    
    
    average /= 5.0;
    
    cout<< setprecision(1)<<fixed<<"The average test score is " << average<<endl;
    
    return 0;
}




