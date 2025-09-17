#include<iostream>
using namespace std;

void solve (int i){
    int sum=0;//Initialize
    for(int n=1;n<i;n++){
        sum+=n;
    }
    cout<<"The sum of first "<<i<<" number is: "<<sum<<endl;
}
int main(){
    solve(5);
    solve(6);
}