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

void calcStats(int[],int);


int main() {
    int answer;
    
    do{
        cout<<"How many students were surveyed? (no negative numbers)"<<endl;
        
        cin>>answer;
        
    }while(answer<0);
    
    int *movies = new int[answer], watched;
    
    for(int i = 0;i<answer;i++){
        
        do{
            cout<<"How many movies did student number "<< i+1<< " watch?"<<endl;
            
            cin>>watched;
            
        }while(watched<0);
    
        movies[i] = watched;
    }
    
    calcStats(movies,answer);
    
    return 0;
}

void calcStats(int arr[],int size)
{
    int sum = 0;
    
    for(int i = 0;i<size;i++)
        sum += arr[i];
    
    cout<<"The total number of movies watched was " << sum<<" movies"<<endl;
    
    cout<<"The average number of movies watched was " << (sum / size) <<" movies"<<endl;
}


