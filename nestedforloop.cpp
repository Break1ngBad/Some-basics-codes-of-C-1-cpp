#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int main ()
 {
    int n,i,j,k;
    cout<<"Enter the number of rows in the pyramid:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout << " ";

        }
        for(k=1;k<=i;k++)
        {
            cout<<k;

        }
        cout<<endl;
    }
    return 0;
 }