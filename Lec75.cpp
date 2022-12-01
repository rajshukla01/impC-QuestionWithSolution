//Topic:Factor of a number
//Date:09/05/2022

#include<iostream>
using namespace std;
int main(){
    int iLoop1, iNum;
    cout<<"Enter the number"<<endl;
    cin>>iNum;
    for(iLoop1=1;iLoop1<=8;iLoop1++){
        if(iNum%iLoop1==0)
        cout<<"The Factor of "<<iNum<<" is :"<<iLoop1<<endl;

    }
    
    return 0;
}