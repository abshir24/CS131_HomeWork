/*
 Abshir Mohamed
 6-27-2018
 HW1
 */


#include <iostream>
#include<string>
using namespace std;
int cool = 12;
int main(){
    string name,city,college,profession;
    
    float ageInSeconds;
    
    cout<<"Please enter your name in form" << " of (first_name last_name): ";
    
    getline(cin,name);
    
    cout<<"Enter the city that you live in: ";
    
    getline(cin,city);
    
    cout<<"How old are you: ";
    
    cin>>ageInSeconds;
    
    cin.ignore();
    
    cout<<"What college did you go to: ";
    getline(cin,college);
    
    cout<<"What is your current profession: ";
    
    getline(cin,profession);
    
    cout<<"There once was a person named " << name << endl;
    
    cout<<"Who lived in "<<city<<endl;
    
    cout<<"At the age of "<<ageInSeconds<<" " << name <<" went to college at " << endl;
    
    cout<< college <<" name graduated and went to work as a "<< profession << endl;
    
    ageInSeconds = ageInSeconds*31572500;
    
    cout<<name<<", if expressed in seconds, you already  "<< ageInSeconds << " seconds old!" << endl;
    
    return 0;
}




