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


int getTotal(int[][5],int size);

int getAverage(int[][5],int size);

int getRowTotal(int[][5],int row);

int getColumnTotal(int arr[][5],int column);

int getLowestInRow(int[][5],int row);

int getHighestInRow(int[][5],int row);

int main()
{
    int scores[3][5]=
    {   {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
    };
    
    return 0;
}

int getTotal(int arr[][5],int size)
{
    int sum = 0;
    
    for(int i = 0;i<size;i++)
        for(int j = 0;j<5;j++)
            sum+=arr[i][j];
    
    return sum;
}

int getAverage(int arr[][5],int size)
{
    return (getTotal(arr,size) / 15);
}

int getRowTotal(int arr[][5],int row)
{
    int sum = 0;
    
    for(int i = 0; i<5;i++)
        sum += arr[row][i];
    
    return sum;
}

int getColumnTotal(int arr[][5],int column)
{
    int sum = 0;
    
    for(int i = 0; i<3;i++)
        sum += arr[i][column];
    
    return sum;
}

int getHighestInRow(int arr[][5],int row)
{
    int maximum = arr[row][0];
    
    for(int i = 0; i<5;i++)
        maximum = max(maximum,arr[row][i]);
    
    return maximum;
}

int getLowestInRow(int arr[][5],int row)
{
    int minimum = arr[row][0];
    
    for(int i = 0; i<5;i++)
        minimum = min(minimum,arr[row][i]);
        
    return minimum;
}



