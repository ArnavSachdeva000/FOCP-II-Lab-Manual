// Q10: Check if a year is a leap year.
#include<iostream>
using namespace std;

int main()
{   
    int year;
    cout<<"Enter the year: ";
    cin>>year;

    if((year%400==0)||(year%4==0 && year%100!=0))
    {
        cout<<"Leap Year"<<endl;
    }
    else{
        cout<<"Not A Leap Year"<<endl;
    }
    return 0;
}