//Topic:Fiding the maximum of two numbers
//Date:01/05/2022

#include<iostream>
using namespace std;
int main(){
    int iNumber1,iNumber2;
    cout<<"Enter the Number 1:"<<endl;
    cin>>iNumber1;
    cout<<"Enter the Number 2:"<<endl;
    cin>>iNumber2;
    if(iNumber1>iNumber2)
    cout<<"The Largest number is :"<<iNumber1;
    else if(iNumber1<iNumber2)
    cout<<"The Largest number is :"<<iNumber2;
    else
    cout<<"Both the number are equal";
    return 0;
}