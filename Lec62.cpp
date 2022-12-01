//Topic: switch case program practice
//Date:04.05.2022

#include<iostream>
using namespace std;
int main(){
    int iCase;
    cin>>iCase;
    switch (iCase)
    {
    case 1:cout<<"Monday";
        break;
    case 2: cout<<"Tuesday";
            break;
    case 3: cout<<"Wednesday";
            break;
    case 4: cout<<"Thursday";
            break;
    case 5: cout<<"Friday";
            break;                
    case 6: cout<<"Saturday";
            break;
    case 7: cout<<"Sunday";
            break;        
    default:
            cout<<"invalid statement";
        break;
    }

    
    return 0;
}