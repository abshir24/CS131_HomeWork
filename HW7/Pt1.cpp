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

int* reverse(int[],int);


int main() {
    int arr[5] = {1,2,3,4,5};
    
    int *copy = new int [5];
    
    copy = reverse(arr,5);
    
    for(int i = 0;i<5;i++)
        cout<< copy[i] <<endl;
    
    return 0;
}

int* reverse(int arr[],int size)
{
    int *copy = new int[size], count = 0;
    
    for(int i = (size - 1); i>=0 ; i--)
        copy[count++] = arr[i];
    
    
    return copy;
    
}
