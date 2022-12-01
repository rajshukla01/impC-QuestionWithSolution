//Topic:Overflow
//Date:30/03/2022

#include<iostream>
using namespace std;
int main(){
    char cX=127;
    cout<<(int)cX<<endl;
    cX++;
    cout<<(int)cX;

    cout<<endl<<"The smallest value";
    char xY=-128;
    cout<<(int)xY<<endl;
    xY--;
    cout<<(int)xY;

    cout<<endl<<"printing the max of int";
    int iMax=INT_MAX;
    cout<<endl<<(int )iMax<<endl;
    iMax++;
    cout<<(int)iMax;
    

    return 0;
}