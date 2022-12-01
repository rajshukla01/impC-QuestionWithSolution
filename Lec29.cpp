//Topic:Program to find the sum of first N Natural Number
//Date:22/03/2022

#include<iostream>
using namespace std;
int main(){
    int INum;
    float FSum;
    cout<<"Enter the vale of N"<<endl;
    cin>>INum;
    FSum =(INum*(INum+1))/2;
    cout<<"The sum of "<<INum<<" Natural number is : "<<FSum;
    

    
    return 0;
}