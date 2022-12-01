//Topic:print the number from 1 to n
//Date:09/05/2022

#include<iostream>
using namespace std;
int main(){
    int iNum,iloop1;
    cout<<"Enter the Value of N"<<endl;
    cin>>iNum;
    cout<<"The number are from 1 to "<<iNum<<" are:"<<endl;
    for(iloop1=1;iloop1<=iNum;iloop1++){
        cout<<iloop1<<endl;
    }
    
    return 0;
}