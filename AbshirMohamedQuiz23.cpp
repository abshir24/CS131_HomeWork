/*
 Abshir Mohamed
 7-24-2018
 HW4
 */


#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 18;
    
    int numbers[ARRAY_SIZE];
    
    float sum = 0;
    
    int count=0;
    
    ifstream inputFile;

    inputFile.open("numbers.txt");
    
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        sum+=numbers[count++];
    
    inputFile.close();
    
    
    int maximum = numbers[0],minimum = numbers[0];
    
    for(int i = 0;i<ARRAY_SIZE;i++)
    {
        maximum = max(numbers[i],maximum);
        minimum = min(numbers[i],minimum);
    }
    
    cout<<"The total sum is " << sum<<endl;
    
    cout<<"The average is " << sum/static_cast<float>(count)<<endl;
    
    cout<<"The maximum number is  " << maximum <<endl;
    
    cout<<"The minimum number is  " << minimum <<endl;
    
    
    return 0;
    
}



