#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
}

void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

void swapPointer(int*a,int*b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

void swapReferenceVar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=4,y=5;
    //cout<<"The sum of 4 and 5 is "<<sum (a,b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(x,y); This will not swap a and b using pointer refernce 
    swapPointer(&x,&y);//This will swap a and b using pointer reference
    //swapReferenceVar(x,y) This will swap a and b using refernce variables
    cout<<"The value of x is "<<x<<"and the value of y is "<<y<<endl;
    return 0;
}