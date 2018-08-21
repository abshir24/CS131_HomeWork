#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

/*
 Abshir Mohamed
 8-13-2018
 HW6
 */

void calcStats(int*,int);

void selectionSort(int*,int);

void swap(int& , int&);

int main() {
    int answer;
    
    do{
        cout<<"How many test scores? (no negative numbers)"<<endl;
        
        cin>>answer;
        
    }while(answer<0);
    
    int *scores = new int[answer], score;
    
    for(int i = 0;i<answer;i++){
        
        do{
            cout<<"What was the score for student number "<< i+1<< "?"<<endl;
            
            cin>>score;
            
        }while(score<0);
    
        scores[i] = score;
    }
    
    selectionSort(scores,answer);
    
    calcStats(scores,answer);
    
    return 0;
}

void selectionSort(int *array, int size)
{
    int minIndex, minValue;
    
    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        
        minValue = *(array+start);
        
        for (int index = start + 1; index < size; index++)
        {
            if (*(array+index) < minValue)
            {
                minValue = *(array+index);
                minIndex = index;
            }
        }
        
        swap(*(array+minIndex),*(array+start));
        
    }
    
    cout<<"The sorted list of scores is now " << endl;
    
    for(int i = 0;i<5;i++)
        cout<< *(array + i) <<endl;
    
}


void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void calcStats(int *arr,int size)
{
    int sum = 0;
    
    for(int i = 0;i<size;i++)
        sum += *(arr+i);
    
    cout<<"The average score was " << (sum / size)<<endl;
}


