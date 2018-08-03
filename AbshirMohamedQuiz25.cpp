/*
 Abshir Mohamed
 7-30-2018
 HW5
 */
#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>

using namespace std;

void showTestAve(double scores[][5],int);

int main()
{
    const int NUM_STUDENTS = 3;
    
    const int NUM_SCORES = 5;
    
    double scores[NUM_STUDENTS][NUM_SCORES]=
    {   {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
    };
    
    
    showTestAve(scores,NUM_STUDENTS);
    
    return 0;
}


void showTestAve(double scores[][5],int rows)
{
    double average,sum=0;
    
    for(int i = 0;i<5;i++){
        
        for(int j = 0;j<rows;j++)
            sum+=scores[j][i];
        
        
        average = sum/3.0;
        
        cout<<"The average score for test #"<< i+1<<" is "<< average<<endl;
        
        sum = 0;
        
    }
    
    
    
    
}


