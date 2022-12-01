//Topic:Sum to n numbers
//Date:09/05/2022

#include<iostream>
using namespace std;
int main(){
    int iNum,iLoop1,iSum=0;
    cout<<"Enter the N number"<<endl;
    cin>>iNum;
    cout<<"The sum of "<<iNum<<" numbers are"<<endl;
    for(iLoop1=1;iLoop1<=iNum;iLoop1++){
        iSum+=iLoop1;
        
    }
    cout<<iSum;
    
    return 0;
}