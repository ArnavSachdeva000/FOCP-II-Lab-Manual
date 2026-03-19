// Q12: Classify a triangle as equilateral, isosceles, or scalene.
#include<iostream>
#include<cmath>

using namespace std;

int main()
{   
    float l1,l2,l3;
    cout<<"Enter the lenght of first side: ";
    cin>>l1;
        cout<<"Enter the lenght of second side: ";
    cin>>l2;
        cout<<"Enter the lenght of third side: ";
    cin>>l3;
    if((l1+l2)>l3 && (l2+l3)>l1 && (l1+l3)>l2 )
    {
    if(l1==l2 && l2==l3)
    {
        cout<<"Equilateral Triangle";
    }
    else if(l1==l2||l2==l3||l1==l3)
    { 
        cout<<"Isosceles Triangle";
    }
    else
    {
        cout<<"Scalene Triangle";
    }
}
else{
    cout<<"Not a triangle";
}
return 0;
}