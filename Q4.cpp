#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x; 
    double y,z,total,final,discount;
    cout<<"Enter item no.: ";
    cin>>x;
    cout<<"Enter quantity of items: ";
    cin>>y;
    cout<<"Enter the unit price of the item: ";
    cin>>z;
    total = y * z;
    discount = total * 0.2 ;
    final = total - discount;
    cout<<"Total bill amount after applying 20% discount: "<<final<<"\n\n";

    return 0;
}

