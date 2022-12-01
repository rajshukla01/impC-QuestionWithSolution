//Topic:Bitwise operator operations
//Date:30/03/2022

#include<iostream>
using namespace std;
int main(){
    int iX,iY,iZ;
    iX=11;
    iY=5;
    iZ=iX&iY;
    cout<<iZ<<endl; 
    iZ=iX|iY;
    cout<<iZ<<endl; 
    iZ=iX^iY;
    cout<<iZ<<endl; 
    cout<<"Character type variable"<<endl;
    // char cVar=5,cVar2;
    // cVar2=cVar<<1;
    // cout<<(int)cVar2<<endl;

    // char cVar=20,cVar2;
    // cVar2=cVar>>1;
    // cout<<(int)cVar2<<endl;

    char cVar=20,cVar2;
    cVar2=~cVar;
    cout<<(int)cVar2<<endl;


    
    return 0;
}