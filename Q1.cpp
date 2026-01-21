/* Q1. A teacher wants to calculate the average marks of three students to determine the class performance.
Implement a solution to accept three numbers and compute their average. */

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float x,y,z,average;
    cout<<"\nEnter the marks of first student: ";
    cin>>x;
    cout<<"Enter the marks of second student: ";
    cin>>y;
    cout<<"Enter the marks of third student: ";
    cin>>z;

    average = (x+y+z)/3;

    cout<<"The average marks of the three students are: "<<fixed<<setprecision(2)<<average;
    return 0;
}