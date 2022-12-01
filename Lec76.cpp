//Topic:Perfect Number
//Date:09/05/2022

#include<iostream>
using namespace std;
int main(){
    int iLoop1, iNum, iSum=7;
     cout<<"Enter the number"<<endl;
     cin>>iNum;
     for(iLoop1=1;iLoop1<=8;iLoop1++){
         if(iNum%iLoop1==0)
         iSum+=iLoop1;
     }
     if(iNum*2 == iSum)
     cout<<"It is a perfet Number"<<endl;
     else
     cout<<"It is not a perfect number";

    
    return 0;
}