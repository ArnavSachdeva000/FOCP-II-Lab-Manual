/*Q7. A game compares three players' scores to find who is ahead. Implement a solution to accept three scores
and identify the winner.*/

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