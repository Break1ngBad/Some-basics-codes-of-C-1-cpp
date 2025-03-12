#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){
    float pamount,rate,time;
    {
        cout<<"Enter the value of pamount\n";
        cin>>pamount;
        cout<<"Enter the rate\n";
        cin>>rate;
        cout<<"Enter the time in years\n ";
        cin>>time;

        float SI =(pamount*rate*time)/100;
        cout<<"SI is :"<<SI;
    }
    return 0;
}