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
    ifstream inputFile("People.txt");
    
    int num,year = 1900;
    
    cout<<"PRAIRIEVILLE POPULATION GROWTH"<<endl;
    
    cout<<"(each * represents 1,000 people)"<<endl;
    
    while((inputFile >> num))
    {
        num=(num/1000);
        
        cout<<year<<" ";
        
        for(int i = 1;i<=num;i++)
            cout<<'*';
        
        cout<<endl;
        
        year += 20;
    }
        
    inputFile.close();

    return 0;
}
