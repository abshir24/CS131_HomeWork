/*
 Abshir Mohamed
 7-24-2018
 HW4
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream inputFile("Random.txt");
    
    int sum = 0,count = 1, num;
    
    float average;
    
    while((inputFile >> num) && count++)
        sum+=num;
    
    
    average = sum/count;
    
    cout<<"The file contains "<< count <<" numbers"<<endl;
    
    cout<<"The sum of all of those numbers is "<<sum<<endl;
    
    cout<<"The average of all of those numbers is "<<average<<endl;
    
    
    
    inputFile.close();

    return 0;
}
