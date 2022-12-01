//Topic:Check if the given number is Even or Odd
//Date:01/05/2022

#include<iostream>
using namespace std;
int main(){
    int iNumber;
    cout<<"Enter a number please"<<endl;
    cin>>iNumber;
    if(iNumber%2==0)
    cout<<"The given number "<<iNumber<<" is Even number";
    else 
    cout<<"The given number "<<iNumber<<" is Odd number";

    
    return 0;
}