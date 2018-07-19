/*
 Abshir Mohamed
 6-27-2018
 HW1
 */


#include <iostream>
#include<string>
using namespace std;

int main(){
    float item1 = 15.95;
    float item2 = 24.95;
    float item3 = 6.95;
    float item4 = 12.95;
    float item5 = 3.95;
    
    float subtotal = item1+item2+item3+item4+item5;
    
    const float salesTax = subtotal * .07;
    
    float total = subtotal + salesTax;
    
    cout<<"Item 1 = " << item1<<endl;
    
    cout<<"Item 2 = " << item2<<endl;
    
    cout<<"Item 3 = " << item3<<endl;
    
    cout<<"Item 4 = " << item4<<endl;
    
    cout<<"Item 5 = " << item5<<endl;

    cout<<"Subtotal = " << subtotal<<endl;
    
    cout<<"Sales Tax = " << salesTax<<endl;
    
    cout<<"Total = " << total<<endl;
    
    return 0;
}




