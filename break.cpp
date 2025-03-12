#include<iostream>
using namespace std;
int main ()
{
    int i,number;
    i=1;
    while (i<5)
    {
        cout<<"Enter the number"<<endl;
        cin>>number;
        for(int j=1;j<3;j++)
        if(number<=0)
        {
            cout<<"The number is zero or negative"<<endl;
            break;
        }
        i++;
    }
    return 0;

}