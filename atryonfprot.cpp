#include<iostream>
using namespace std;

int sum(int,int,int);
int sub(int, int,int);
int mul(int,int,int);
//float div(int,int);//don't take float inside the bracket  may cause error 

int main (){
    int a,b,c;
    cout<<"The value of a\n";
    cin>>a;
    cout<<"The value of b\n";
    cin>>b;
    cout<<"the value of c\n";
    cin>>c;
    cout<<"The sum is:"<<sum(a,b,c)<<endl;
    cout<<"The subtraction od them is"<<sub(a,b,c)<<endl;
    cout<<"The multiplication is:"<<mul(a,b,c)<<endl;
    //cout<<"The division is:"<<div(a,b)<<endl;
    return 0;
}

int sum(int a,int b,int c){
    int d = a+b+c;
    return d;

}

int sub(int a,int b,int c){
    int e = a-b-c;
    return e;

}

int  mul(int a,int b,int c){
    int f = a*b*c;
    return f;

}

//float div(int a,int b){  // Now takes int arguments
  //  if (b == 0) {
   //     cout << "Error! Division by zero is not allowed.\n";
  //      return -1;
   // }
   // return (float)a / b;  // Ensures float division
//}
