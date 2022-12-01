//Topic:Palindrome Number
//Date:10/05/2022

#include<iostream>
using namespace std;
int main(){
    int iNum,iRem,iRev=0,iTemp;
    cout<<"Enter the number";
    cin>>iNum;
    iTemp=iNum;
        while(iNum>0){
            iRem=iNum%10;
            iNum=iNum/10;
            iRev=iRev*10+iRem;
        }
            if(iTemp==iRev)
            cout<<"It is a palindrome Number";
            else 
            cout<<"It is not a palindrom Number";


        return 0;
}