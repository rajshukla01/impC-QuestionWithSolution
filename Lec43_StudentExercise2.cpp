//Topic:Write a program to calculate net salary program should take following as input
//      1.Basic Salary
//      2.Percentaga of allowances
//      3.Percentage of Deduction
// since, NetSalary=BasicSalary + BasicSalary*PercentageAllowances - BasicSalary*PercentageDeduction

//Date:30/03/2022

#include<iostream>
using namespace std;
int main(){
    int iBasicSalary,iPercentageAllowance,iPercentageDeduction;
    cout<<"Enter the Basic Salary , Percentage Allowance and Percentage Deduction"<<endl;
    cin>>iBasicSalary>>iPercentageAllowance>>iPercentageDeduction;
    cout<<"The Net Salary is :"<<iBasicSalary+iBasicSalary*iPercentageAllowance/100-iBasicSalary*iPercentageDeduction/100;

    
    return 0;
}