#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int first=0,second=1,next;
    int n,i;
    cout<<"Enter the number of terms in the series :";
    cin>>n;// number of terms user wants to print 
    cout<<"***The Fibonacci series ***"<<endl;
    cout<<first<<"\t"<<second;
    i=3;//because it starts with 3rd numbers as first =0 and second = 1
    while(i<=n)
    {
        next=first+second;//0 1 0+1=1
        cout<<"\t"<<next;// 1 1 1+1=2
        first=second;    // 1 2 1+2=3
        second=next;     // 2 3 2+3=5
        i++;
    }
    return 0;
}   