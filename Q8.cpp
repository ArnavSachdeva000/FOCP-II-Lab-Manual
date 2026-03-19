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