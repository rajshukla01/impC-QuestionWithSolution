//Topic:Factorial of  n numbers
//Date:09/05/2022

#include<iostream>
using namespace std;
int main(){
    int iNum,iLoop1,iFac=1;
    cout<<"Enter the N number"<<endl;
    cin>>iNum;
    cout<<"The sum of "<<iNum<<" numbers are"<<endl;
    for(iLoop1=1;iLoop1<=iNum;iLoop1++){
        iFac*=iLoop1;
        
    }
    cout<<iFac;
    
    return 0;
}