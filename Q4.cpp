// Q4: Calculate a total bill after a 20% discount.

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

const float discount=0.20f;

int main()
{
    float ad;
    float no,Q;
    float P;
    cout<<"Item Number: ";
    cin>>no;
    cout<<"Quantity: ";
    cin>>Q;
    cout<<"Unit Price: ";
    cin>>P;


    ad= (P)*discount;
    ad = P-ad;
    float f;
    f = ad*Q;


    cout<<"Price after discount of item no "<<no<<" :"<<f<<endl;



    return 0;
}