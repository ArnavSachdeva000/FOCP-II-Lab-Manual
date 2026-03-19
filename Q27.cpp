#include<iostream>
using namespace std;

int main()
{
    float array[10]={};
    float highest = 0;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the price of "<<i+1<<" item: ";
        cin>>array[i];
        if(array[i]>highest)
        {
            highest =+ array[i];
        }
    }
    cout<<endl;
        cout<<"Price of the highest item is: "<<highest<<endl;

}