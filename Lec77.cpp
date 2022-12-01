//Topic:prime number or not
//Date:09/05/2022

#include<iostream>
using namespace std;
int main(){
    int iNum, iloop1,iCount=0;
    cout<<"Enter the number"<<endl;
    cin>>iNum;
    for(iloop1=2;iloop1<=iNum;iloop1++){
        if(iNum%iloop1==0) 
        iCount++;
    }
    if(iCount==1)
    cout<<"It is a prime number"<<endl;
    else
    cout<<"It is not a prime  number";
    return 0;
}