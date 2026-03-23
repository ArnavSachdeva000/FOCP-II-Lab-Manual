#include<iostream>
using namespace std;

int main()
{
    double a;
    cout<<"Enter the number of employees: ";
    cin>>a;
    double b;
    cout<<"Enter the basic salary of the employees: ";
    cin>>b;
    double bonus, net;
    net = a*b;
    bonus = (0.12)*b;
    b = b + bonus;
    cout<<"The net salary of the employees is: "<<net<<endl;
    cout<<"The bonus given to each employee is: "<<bonus<<endl;
    cout<<"The salary of each employee after the bonus is: "<<b<<endl;


    return 0;
}    