#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int choice ;
    cout<<"1.For area of circle "<<endl;
    cout<<"2.For araea of reactangle"<<endl;
    cout<<"Enter your choice";

    cin>>choice ;
    if(choice==1)
    {
        float radius ,areac;
        cout<<"Enter the radius of circle :";

        cin>>radius;
        areac=3.4*radius*radius;
        cout<<"Area of circle="<<areac;

    }
    else if(choice==2) {
        float length , width , arear;
        cout<<"Enter the sides of rectangle :"<<endl;
        cin>>length>>width;
        arear=length*width;
        cout<<"Area of the rectangle:"<<arear;

    }
    else{
        cout<<"sleep";

    }
    return 0;
}