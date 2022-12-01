//Topic:enum and typedef
//Date:30/03/2022

#include<iostream>
using namespace std;
enum day{mon,tue,wed,thur,fri,sat,sun};//enum declaration
enum dep{cs,it=20,mech,civil=20,bioTec=20};// all of there are acting as a constant and can't be increment or decrement.

typedef int marks;//typedef declaration
typedef int RollNo;
int main(){
    // ***enum declaration****
    day d;
    d=mon;
    cout<<d<<endl;
    cout<<mon;
    // mon++;  this declaration is wrong
    cout<<endl<<"The department course"<<endl;
    dep course;
    course=cs;
    cout<<cs<<endl;
    cout<<mech<<endl;
    cout<<civil<<endl;
    cout<<bioTec<<endl;
    cout<<it<<endl;

        // *******typedef declaration******
        marks m1,m2,m3;
        RollNo r1,r2,r3;
        r1=1;
        m1=45;
        cout<<"The roll number is "<<r1<<endl;
        cout<<"The marks are "<<m1;


    
    return 0;
}