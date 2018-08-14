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

void getJudgeData(int,double[]);

double calcScore(double[],int);

double findLowest(double[]);

double findHighest(double[]);

//I didn't want to use 20 conditions in my calculate score function to find the sum so I used an array instead.
//I only used the array for the calculation of the sum to save time. The rest of the program runs based off of the instructions given in the assignment.

int main()
{
    const int SIZE=5;
    
    double scores[SIZE],average;
    
    getJudgeData(0,scores);
    
    getJudgeData(1,scores);
    
    getJudgeData(2,scores);
    
    getJudgeData(3,scores);
    
    getJudgeData(4,scores);
    
    average = calcScore(scores,SIZE);
    
    cout<<"The final score for the contestant is " << average<<endl;
    
    return 0;
}

void getJudgeData(int count,double scores[])
{
    double score;
    
    do{
        cout<<"Enter the score for judge "<<count+1<<". No negative values and scores cannot be greater than 10"<<endl;
        
        cin>>score;
        
    }while(score<0 || score>10);
    
    scores[count] = score;
}

double calcScore(double scores[],int size)
{
    double sum=0;
    
    double min = findLowest(scores),
    
    max = findHighest(scores);
    
    cout<<"The minimum value is " << min <<endl;
    
    cout<<"The maximum value is " << max <<endl;
    
    for(int i = 0;i<size;i++)
        if(scores[i] != max && scores[i] != min)
            sum+=scores[i];
    
    return sum/3.0;
}



double findLowest(double scores[])
{
    //gives the smallest score using the minimum function;
    
    return min(scores[4],min(min(scores[0],scores[1]),min(scores[2],scores[3])));
}

double findHighest(double scores[])
{
    //gives the largest score using the max function;
    
    return max(scores[4],max(max(scores[0],scores[1]),max(scores[2],scores[3])));
}

