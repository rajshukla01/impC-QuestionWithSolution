//Topic:Reverse a number
//Date:10/05/2022

#include<iostream>
using namespace std;
int main(){
    int iNum,iRem,iRev=0;
    cout<<"Enter the number";
    cin>>iNum;
        while(iNum>0){
            iRem=iNum%10;
            iNum=iNum/10;
            iRev=iRev*10+iRem;
        }
        cout<<"The reversed number is "<<iRev;


        return 0;
}