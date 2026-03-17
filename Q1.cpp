// Q1: Calculate the average marks of three students.
#include<iostream>
#include<iomanip>
using namespace std;

int main()

{   
    int i=1;
    float marks,total=0.0f;
    while(i<=3)
    {
    cout<<"Enter marks of the student"<<i<<": ";
    cin>>marks;
    total += marks;
    i++;
}
float average;
average = total/3.0f;

cout<<"The average marks of the three students are: "<<setprecision(4)<<average<<endl;
return 0;
}