#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    cout << "1. For area of circle" << endl;
    cout << "2. For area of rectangle" << endl;
    cout << "Enter the choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
        float radius,areac;
        cout<<"Enter the radius of the circle:";
        cin>>radius;
        areac=3.14*radius*radius;
        cout<<"\nArea of circle =:"<<areac;
        break;

        case 2:
        float length,width,arear;
        cout<<"Enter the radius of the Rectangle:"<<endl;
        cin>>length,width;
        arear=length*width;
        cout<<"\nArea of Rectangle =:"<<arear;
        break;

        default:
        cout<<"You have not seletced hte proper choice ";
        break;
    }
    return 0;
}

