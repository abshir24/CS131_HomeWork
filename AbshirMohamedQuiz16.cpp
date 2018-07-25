
// This program writes user input to a file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream inputFile("quiz16.txt");
    
    int sum = 0,count = 1, num;
    
    float average;
    
    while((inputFile >> num) && count++)
        sum+=num;
    
    
    cout<<"Sum is "<<sum<<endl;
    
    average = sum/count;
    
    cout<<"Average is "<<average<<endl;
    
    inputFile.close();

    return 0;
}
