//Topic:
//Date:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int j,k,count[100];
    cin>>n; // no of wheels
    int valueOfWheel[n],moves[n]; //current value on the wheel
    for(int i=0;i<n;i++){
        cin>>valueOfWheel[i];
    }
    for(j=0;j<n;j++){
        cin>>moves[j];
        char c[n][moves[j]];
        for(k=0;k<moves[j];k++){
            cin>>c[j][k];
        }
        for(int l=0;l<moves[j];l++){
            if(c[j][l]=='D'){
                count[l]++;
            }
        } 
    }
    for(int m=0;m<n;m++){
        cout<<count[m]<<" "<<endl;
    }
   

    return 0;
}