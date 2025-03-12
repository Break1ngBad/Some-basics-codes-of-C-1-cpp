#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i,j;
    cout<<"Enter the value of n ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
        cout<< "*" ;
        }
   
    cout<<endl;
    }
    return 0;
}