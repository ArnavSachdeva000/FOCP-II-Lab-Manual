/* Q2. An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute
the area of a circle. */

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{   float x,space;
    float pi = 3.1415;
    cout<<"\nEnter the radius of the circular mountain: ";
    cin>>x;
    space = pi*x*x;
    cout<<"The space covered by the circular fountain is: "<<fixed<<setprecision(2)<<space<<endl;
    return 0;
}