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

int* oneUp(int[],int);


int main() {
    int arr[5] = {1,2,3,4,5};
    
    int *copy = new int [5];
    
    copy = oneUp(arr,5);
    
    for(int i = 0;i<6;i++)
        cout<< copy[i] <<endl;
    
    return 0;
}

int* oneUp(int arr[],int size)
{
    int *copy = new int[size+1];
    
    for(int i = 0;i<(size+1);i++)
        i ==0 ? copy[i] = 0 : copy[i] = arr[i-1];
    
    
    return copy;
    
}
