//Topic:Program to calculate the simple interest .
//Date:25/03/2022

#include<iostream>
using namespace std;
int main(){
    float fPrinciple,fTime,fRate;
    cout<<"Enter the Principle, Rate and Time"<<endl;
    cin>>fPrinciple>>fRate>>fTime;
    cout<<"The simple interest is :"<<(fPrinciple*fRate*fTime)/100;



    return 0;
}