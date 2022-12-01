//Topic:Find if the number is positive or negative
//Date:01/05/2022

#include<iostream>
using namespace std;
int main(){
    
     int iNumber;
    cout<<"Enter the Number 1:"<<endl;
    cin>>iNumber;
  
    if(iNumber<0)
    cout<<"The given number "<<iNumber<<" is Negative";
    else if(iNumber>0)
    cout<<"The given number "<<iNumber<<" is Positive";
    else
    cout<<"The given number is 0";
    return 0;
}