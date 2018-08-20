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

int* doubleSize(int[],int);


int main() {
    int arr[5] = {1,2,3,4,5};
    
    int *copy = new int [5];
    
    copy = doubleSize(arr,5);
    
    for(int i = 0;i<10;i++)
        cout<< copy[i] <<endl;
    
    return 0;
}

int* doubleSize(int arr[],int size)
{
    int *copy = new int[size*2];
    
    for(int i = 0;i<(size*2);i++)
        i < 5 ? copy[i] = arr[i] : copy[i] = 0;
    
    
    return copy;
    
}
