//Topic:All year are prefectly divisible by 4 are call leap year except for the century year, which is leap year if it is perfectly divisible by 400.
//Date:04.05.2022

#include<iostream>
using namespace std;
int main(){
    int iYear;
    cin>>iYear;
    
        if(iYear%400==0)
        cout<<"It is a leap year"; 
        else if(iYear%100==0)
        cout<<"It is not a leap year";
        else if(iYear%4==0)
        cout<<"It is a leap year";
        else 
        cout<<"It is not a leap year";

    return 0;
}