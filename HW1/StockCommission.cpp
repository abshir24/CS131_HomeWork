/*
 Abshir Mohamed
 6-27-2018
 HW1
 */



#include <iostream>
using namespace std;
int main(){
    const float stockAmount = 750 * 35.00;
    const float commission = stockAmount * .02;
    const float totalAmount = stockAmount + commission;
    
    cout<<"Kathryn payed " << stockAmount << " just for the stocks."<< endl;
    cout<<"She payed " << commission << " just for the commission."<< endl;
    cout<<"The total ammount payed  is " << totalAmount << endl;
    return 0;
}



