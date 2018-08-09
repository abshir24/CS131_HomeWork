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

void getScore(int&,int);

void calculateAverage(int,int,int,int,int);

int findLowest(int,int,int,int,int);

int main()
{
    int score1,score2,score3,score4,score5;
    
    getScore(score1,1);
    
    getScore(score2,2);
    
    getScore(score3,3);
    
    getScore(score4,4);
    
    getScore(score5,5);
    
    calculateAverage(score1,score2,score3,score4,score5);
    
    return 0;
}

void getScore(int&score,int count)
{
    do{
        cout<<"Enter the test score for student "<<count<<" No negative values and scores cannot be greater than 100"<<endl;
        
        cin>>score;
        
    }while(score<0 || score>100);
    
}

void calculateAverage(int score1,int score2,int score3,int score4,int score5)
{
    int minimum = findLowest(score1,score2,score3,score4,score5);
    
    double sum,average;

    cout<<"The minimum value is " << minimum <<endl;
    
    
    //can you explain this to me whenever you get the chance? 'Case value is not a constant expression
//    switch(minimum)
//    {
//        case score1:
//            sum = (score2+score3+score4+score5);
//            break;
//
//        case score2:
//            sum =(score1+score3+score4+score5);
//            break;
//
//        case score3:
//            sum =(score1+score2+score4+score5);
//            break;
//
//        case score4:
//            sum =(score1+score2+score3+score5)
//            break;
//
//        default:
//            sum =(score1+score2+score3+score4);
//            break;
//
//    }
    
    if(minimum == score1) sum = (score2+score3+score4+score5);

    else if(minimum == score2) sum =(score1+score3+score4+score5);

    else if(minimum == score3) sum =(score1+score2+score4+score5);

    else if(minimum == score4) sum =(score1+score2+score3+score5);

    else sum =(score1+score2+score3+score4);
    
    average = sum / 4;
    
    cout<<"The average score is " << average<<endl;
    
    return;
}


int findLowest(int score1,int score2,int score3,int score4,int score5)
{
    //gives the smallest score using the minimum function;
    
    return min(score5,min(min(score1,score2),min(score3,score4)));
}

