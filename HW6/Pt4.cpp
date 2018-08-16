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


int getTotal(int[][7],int size);

int getAverage(int[][7],int size);

int getHighestFood(int[][7],int size);

int getLowestFood(int[][7],int size);

int main()
{
    int monkeys[3][7];
    
    for(int i = 0;i<3;i++)
    {
        int food;
        
        for(int j = 0;j<7;j++){
            
            do{
                
                cout<<"How many pounds of food did monkey #"<< i+1<<" eat for day "<< j+1<<"?  (No negative values for food)"<<endl;
                
                cin>>food;
            }while(food<0);
            
            monkeys[i][j] = food;
        }
        
    }
    
    return 0;
}

int getTotal(int arr[][7],int size)
{
    int sum = 0;
    
    for(int i = 0;i<size;i++)
        for(int j = 0;j<5;j++)
            sum+=arr[i][j];
    
    return sum;
}

int getAverage(int arr[][7],int size)
{
    return (getTotal(arr,size) / 7);
}

int getLowestFood(int arr[][7],int size)
{
    int minimum = arr[0][0];
    
    for(int i = 0; i<size;i++)
        
        for(int j = 0;j<7;j++)
            minimum = min(minimum,arr[i][j]);
    
    return minimum;
}


int getHighestFood(int arr[][7],int size)
{
    int maximum = arr[0][0];
    
    for(int i = 0; i<size;i++)
        
        for(int j = 0;j<7;j++)
            maximum = max(maximum,arr[i][j]);
    
    return maximum;
}




