/* Q11. A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total
expenses and apply a discount accordingly. */
#include<iostream>
using namespace std;

int main()
{
    double a;
    cout<<"Enter the number of items: ";
    cin>>a;
    double b;
    cout<<"Enter the price of each item: ";
    cin>>b;
    double total, discount, net;
    total = a*b;
    if(a>1000)
    {
        discount = (0.1)*total;
        net = total - discount;
        cout<<"The total expenses is: "<<total<<endl;
        cout<<"The discount applied is: "<<discount<<endl;
        cout<<"The net expenses after discount is: "<<net<<endl;
    }
    else
    {
        cout<<"The total expenses is: "<<total<<endl;
        cout<<"No discount applied."<<endl;
    }
    
    return 0;
}