#include<iostream>
using namespace std;

int f(int i ){
    if(i<=-1)
    return 0;
     cout<<i<<"\n";
    return i+f(i-1);
    cout<<i;
}

int main(){
    int i;
    cin>>i;
    cout<<f(i);
}