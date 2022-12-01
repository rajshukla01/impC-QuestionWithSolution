//Topic:Program to Calculate the distance
//Date:25/03/2022

#include<iostream>
using namespace std;
int main(){
    float fInitialVelocity, fFinalVelocity,fAcceleration,fDistance;
    cout<<"Enter the Initial Velocity , final velocity and the acceleration"<<endl;
    cin>>fInitialVelocity>>fFinalVelocity>>fAcceleration;
    fDistance=(fFinalVelocity*fFinalVelocity-fInitialVelocity*fInitialVelocity)/(2*fAcceleration);
    cout<<"The Distance is :"<<fDistance;
    return 0;
}