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


void selectionSort(int[],int);

void swap(int& , int&);

bool binarySearch(int[],int size,int);

int main()
{
    int accountNumbers[18] = {
        5658845,4520125,7895122,8777541,8451277,1302850,
        8080152,4562555,5552012,5050552,7825877,1250255,
        1005231,6545231,3852085,7576651,7881200,4581002
    },userNum;
    
    selectionSort(accountNumbers,18);
    
    
    cout<< "Enter an account number"<<endl;
    
    cin>>userNum;
    
    if(binarySearch(accountNumbers,18,userNum))
        cout<<"The number is valid"<<endl;
    else
        cout<<"The number is invalid"<<endl;
    
    
    return 0;
}

void selectionSort(int array[], int size)
{
    int minIndex, minValue;
    
    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        
        minValue = array[start];
        
        for (int index = start + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        
        swap(array[minIndex],array[start]);

    }
}


void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


bool binarySearch(int array[], int size, int value)
{
    int first =0,
    last =size-1,
    middle;
    
    while (first<=last)
    {
        middle = (first+last)/2;
        
        if (array[middle] == value)
        {
            return true;
        }
        else if (array[middle] > value)
            
            last = middle-1;
        
        else
            first = middle+1;
    }
    
    return false;
}

