#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,i,j;
    cout<<"The value of n:";
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<i;
        }
       
        cout<<endl;
    }
    return 0;
}

