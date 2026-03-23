#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter the score of player 1: ";
    cin>>a;
    cout<<"Enter the score of player 2: ";
    cin>>b;
    cout<<"Enter the score of player 3: ";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"Player 1 is ahead."<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"Player 2 is ahead."<<endl;
    }
    else
    {
        cout<<"Player 3 is ahead."<<endl;
    }
    return 0;
}