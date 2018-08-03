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

void getTestScores(double[],int);

double getTotal(double[],int);

int main()
{
    const int SIZE = 5;
    
    double scores[SIZE];
    
    getTestScores(scores,SIZE);
    
    cout<<"The total of all of the test scores is " << getTotal(scores,SIZE)<<endl;
    
    return 0;
}

void getTestScores(double scores[],int size)
{
    cout<<"Enter 5 test scores";
    
    int count = 0;
    
    double score;
    
    while(count < size ){
        
        cin>>score;
        
        if(score < 0 || score> 100) cout<<"Please enter a valid score between 0 and 100"<<endl;
        
        else scores[count++] = score;
        
    }
    
}

double getTotal(double scores[],int size)
{
    double total = 0;
    
    for(int i = 0;i<size;i++)
        total+=scores[i];
    
    return total;
}


