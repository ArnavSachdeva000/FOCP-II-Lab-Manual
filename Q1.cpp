#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float x,y,z,average;
    cout<<"\nEnter the marks of first student:\t";
    cin>>x;
    cout<<"Enter the marks of second student:\t";
    cin>>y;
    cout<<"Enter the marks of third student:\t";
    cin>>z;

    average = (x+y+z)/3;

    cout<<"The average marks of the three students are:\t"<<fixed<<setprecision(2)<<average;
    return 0;
}