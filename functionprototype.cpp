#include<iostream>
#include<conio.h>

using namespace std;

 int sum(int a, int b);//acceptable
 //int sum( int a,b); Not acceptable

 //int sum(int,int) - acceptable
 //Function prototype
 //type function-name (arguments);

 int main (){
    int num1,num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter second number:"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2);
    return 0;
 }
 int sum(int a, int b){
    int c=a+b;
    return c;
 }