//Topic:Distance between two point
//Date:25/03/2022

#include<iostream>
using namespace std;
int main(){
    float fPoint1_xCoodinate,fPoint1_yCoodinate,fPoint2_xCoordinate,fPoint2_yCoordinate,fDistance;
    cout<<"Enter the coordinate of the p1 and p2"<<endl;
    cin>>fPoint1_xCoodinate>>fPoint1_yCoodinate>>fPoint2_xCoordinate>>fPoint2_yCoordinate;

    fDistance=(fPoint2_xCoordinate-fPoint1_xCoodinate)/(fPoint2_yCoordinate-fPoint1_yCoodinate);
    cout<<"The distance between the two points is :"<<fDistance;

    

        
    
    return 0;
}