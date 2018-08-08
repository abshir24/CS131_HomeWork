// Chapter 8, Programming Challenge: Sorting Benchmarks
#include <iostream>
using namespace std;

// Constant for array sizes
const int SIZE = 20;

// Function prototypes

void bubbleSort(long[],int,int&);

void selectionSort(long[],int,int&);

void showValues(long[],int);

void swap(int &, int &);


int main()
{
    int exchanges; // Number of exchanges made
    
    // Two arrays with identical values
    long accounts1[SIZE] =
    { 5658845,  4520125,  7895122,
        8777541,  8451277,  1302850,
        8080152,  4562555,  5552012,
        5050552,  7825877,  1250255,
        1005231,  6545231,  3852085,
        7576651,  7881200,  4581002 };
    
    long accounts2[SIZE] =
    { 5658845,  4520125,  7895122,
        8777541,  8451277,  1302850,
        8080152,  4562555,  5552012,
        5050552,  7825877,  1250255,
        1005231,  6545231,  3852085,
        7576651,  7881200,  4581002 };
    
    // Sort accounts1 with bubble sort. The function
    // returns the number of exchanges made.
    // write your code here
    
    bubbleSort(accounts1,SIZE,exchanges);
    
    // Display the number of exchanges made by the
    // bubble sort.
    cout << "\n" << exchanges
    << " exchanges were made by Bubble Sort."
    << endl;
    
    exchanges = 0;
    
    // Sort accounts2 with selection sort. The function
    // returns the number of exchanges made.
    // write your code here
    
    selectionSort(accounts2,SIZE,exchanges);
    
    cout << "\n" << exchanges
    <<  " exchanges were made by Selection Sort."
    << endl;
    
    //Call the showValue function twice to see your sorting result
    
    cout<<"***************************************"<<endl;
    
    showValues(accounts1,SIZE);
    
    
    cout<<"***************************************"<<endl;
    
    
    cout<<"***************************************"<<endl;
    
    showValues(accounts2,SIZE);
    
    
    cout<<"***************************************"<<endl;
     
    
    return 0;
}

// ********************************************************
// The bubbleSort function performs the bubble sort on    *
// the array and returns the number of exchanges made.    *
// ********************************************************
void bubbleSort(long array[], int size,int& exchange)
{
    int maxElement;
    int index;
    
    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (array[index] > array[index + 1])
            {
                exchange++;
                swap(array[index], array[index + 1]);
            }
        }
    }
}

// ********************************************************
// The selectionSort function performs the selection sort *
// on array and returns the number of exchanges made.     *
// ********************************************************
void selectionSort(long array[], int size,int& exchange)
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
        swap(array[minIndex], array[start]);
        exchange++;
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}



//Define the showValue function
void showValues(long arr[],int size)
{
    for(int i = 0;i<(size-1);i++)
        cout<<arr[i]<<endl;
}

