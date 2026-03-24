/*Q8. A monitoring system generates a sequence of numeric event IDs from 1 to N.
To make logs easier to analyse, the system applies tags to certain events based on predefined rules:
•
Events whose ID is divisible by 3 are tagged as “Buzz”
•
Events whose ID is divisible by 5 are tagged as “Fuzz”
•
Events divisible by both 3 and 5 receive both tags*/

#include<iostream>

using namespace std;

int main()
{
    cout<<"Enter your ID: ";
    int id;
    cin>>id;
    cout<<"Tag: ";
    if(id%3==0 && id%5==0)
    {
        cout<<"BuzzFuzz"<<endl;
    }
    else if(id%3==0)
    {
        cout<<"Buzz"<<endl;
    }
    else if(id%5==0)
    {
        cout<<"Fuzz"<<endl;
    }
    else{ 
        cout<<"No ID"<<endl;
    }
    return 0;
}