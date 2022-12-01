//Topic:Program to write multiplication table
//Date:09/05/2022

#include<iostream>
using namespace std;
int main(){
    int iLoop1,iNum;
    cout<<"Enter the number for which multiplication table is required"<<endl;
    cin>>iNum;
    cout<<"The Multiplication table of number "<<iNum<<" is :"<<endl;
    for(iLoop1=1;iLoop1<=10;iLoop1++)
    {
        cout<<iLoop1*iNum<<endl;
    }

    
    return 0;
}