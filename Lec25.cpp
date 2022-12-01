//Topic:Typecasting program
//Date:21/03/2022

#include<iostream>
using namespace std;
int main(){
    int Ivar1,Ivar2;
    float FResult1,FResult2;
    Ivar1=5;
    Ivar2=2;
    FResult1=(float)Ivar1/Ivar2;

    cout<<"The output of  5/2 is ="<<FResult1<<endl;

    FResult2=Ivar1 % Ivar2;
    cout<<"The output of  5%2 is ="<<FResult2;

    char CChar1=68,CChar2=65,CCharResult;
    CCharResult=CChar1%CChar2;
    cout<<endl<<"The Result of A % C is"<<CCharResult;


    
     
    return 0;
}
