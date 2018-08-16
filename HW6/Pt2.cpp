/*
 Abshir Mohamed
 8-13-2018
 HW6
 */

#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
#include <iostream>

using namespace std;



int main()
{
    const char answers[20]= {'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B'};
    
    char studentAnswers[20];
    
    char answer;
    
    int score=0;
    
    for(int i = 0;i<20;i++)
    {
        do{
            cout<<"Enter answer for question #"<< i+1<<" (A,B,C,D)"<<endl;
            
            cin>>answer;
            
        }while((answer!='A'&& answer!='B'&& answer!='C' && answer!='D') && (answer!='a'&& answer!='b'&& answer!='c' && answer!='d'));
        
        studentAnswers[i] = answer;
    }
    
    for(int i = 0;i<20;i++)
        if(studentAnswers[i] == answers[i]) score++;
    
    if(score>=15) cout<<"This student has scored "<< score << " out of 20. This student passed."<<endl;
    
    else cout<<"This student has scored "<< score << " out of 20. This student did not pass."<<endl;
        
    
    return 0;
}





