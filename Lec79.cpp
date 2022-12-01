//Topic:print the digits of a number 
//Date:10/05/2022

#include<iostream>
using namespace std;
int main(){
    int iNum,iRem;
    cout<<"Enter the number "<<endl;
    cin>>iNum;
    while(iNum>0){
        iRem=iNum%10;
        iNum=iNum/10;
        cout<<iRem<<endl;
    }
    return 0;
}