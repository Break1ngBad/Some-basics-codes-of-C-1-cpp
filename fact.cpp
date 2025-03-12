#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main ()
{
    int i , n;
    long double factorial =1;
    cout << "Enter the number whose factorial will be done: ";
    cin >> n;

    for (i=1;i<=n;i++){
        factorial=factorial*i;

    }
    cout<<"Factorial of "<<n<< "="<< factorial;
    return 0;
}