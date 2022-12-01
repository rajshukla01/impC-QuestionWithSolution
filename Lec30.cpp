//Topic:Program to find the root of Quadratic Equation
//Date:22/03/2022

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int Ia,Ib,Ic;
    float FRootOfEquation_Negative,FRootOfEquation_Positive,FDiscriminant;
    cout<<"Enter the value of a, b & c "<<endl;
    cin>>Ia>>Ib>>Ic;
    // FDiscriminant=(Ib*Ib)-(4*Ia*Ic);
    FRootOfEquation_Positive= (-Ib+sqrt((Ib*Ib)-(4*Ia*Ic)))/(2*Ia);
    FRootOfEquation_Negative= (-Ib-sqrt((Ib*Ib)-(4*Ia*Ic)))/(2*Ia);
    cout<<"The Root of the equation are "<<FRootOfEquation_Positive<<" , "<<FRootOfEquation_Negative;
    
    
    return 0;
}