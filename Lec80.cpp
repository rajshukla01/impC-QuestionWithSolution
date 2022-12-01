//Topic:Armstrong Number
//Date:10/05/2022

#include<iostream>
using namespace std;
int main(){
    int iNum,iRem,iSum=0,iTemp;
    cout<<"Enter the value of n"<<endl;
    cin>>iNum;
    iTemp=iNum;
    while(iNum>0){
        iRem=iNum% 10;
        iNum=iNum/10;
        iSum+=iRem*iRem*iRem;

    }
    if(iSum==iTemp)
    cout<<"It is an Armstrong Number"<<endl;
    else
    cout<<"It is not an Armstrong Number"<<endl;

    
    return 0;
}