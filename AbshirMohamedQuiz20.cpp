/*
 Abshir Mohamed
 7-24-2018
 HW4
 */


#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

double getSales(string);

void findHighest(double,double,double,double);

int main()
{
    double Northeast = getSales("Northeast");
    double Southeast = getSales("Southeast");
    double Northwest = getSales("Northwest");
    double Southwest = getSales("Southwest");
    
    findHighest(Northeast,Southeast,Northwest,Southwest);
    
    return 0;
    
}

double getSales(string division)
{
    double sales;
    
    do{
        cout<<"What are the quarterly sales for the " << division << " division? (sales cannot be a negative number)"<<endl;
        
        cin>>sales;
    }while(sales<0);
    
    
    
    return sales;
}

void findHighest(double NE,double SE , double NW, double SW)
{
    string division;
    
    double max1 = max(NE,SE),
    max2 = max(NW,SW),
    winner = max(max1,max2);
    
    if(winner == NE) division = "Northeast";
    
    else if(winner == SE) division = "Southeast";
    
    else if(winner == NW) division = "Northwest";
    
    else division = "Southwest";
    
    cout<<"The winner is the  "<< division << " division with a final total of $"<< winner<<endl;
}





