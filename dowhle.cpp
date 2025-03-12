#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){
    int orinum,chnum,rev=0,digit;
    cout<<"Enter the number:";
    cin>>orinum;
    chnum=orinum;
    do{
        digit=chnum%10;
        rev=rev*10+digit;
        chnum=chnum/10;
    }
    while(chnum!=0);
    if(orinum==rev)
    {
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not a palindrome";
    }
    return 0;
}