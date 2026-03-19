// Q21: Generate a rectangular hollow frame.

#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the width: ";
    cin>>a;
    cout<<"Enter the height: ";
    int b;
    cin>>b;
    cout<<endl;

    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i==b || i==1 || j==1 || j ==a)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}