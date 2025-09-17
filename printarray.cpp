#include<iostream>
using namespace std;

void f(int arr,int size ,int index=0){
    if(index==size)
    return ;
    cout<<arr[index]<<" ";
    f(arr,size,index+1);
}
int main(){
   int size = sizeof(arr) / sizeof(arr[0]);
    f(arr, size);
    return 0;
}
