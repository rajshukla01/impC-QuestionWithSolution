//Topic:GCD(Greatest Common Divisior) of a number
//Date:10/05/2022

#include<iostream>
using namespace std;
int main(){
    int iNum1,iNum2;
    cout<<"Enter the two number"<<endl;
    cin>>iNum1>>iNum2;
    while(iNum1!=iNum2){
        if(iNum1>iNum2)
        iNum1-=iNum2;
        else if(iNum2>iNum1)
        iNum2-=iNum1;
    }
    cout<<"The GCD of the two number is : "<<iNum1<<endl;
    
    return 0;
}