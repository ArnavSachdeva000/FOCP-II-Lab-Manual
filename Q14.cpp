/*Q14. Develop a menu-driven calculator program in C++ to perform basic arithmetic operations.
The program should continue executing based on the user's choice and display the result of each operation.*/
#include<iostream>
using namespace std;

int main()
{
    cout<<"Menu: "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    int x;
    cout<<"Enter your choice: ";
    cin>>x;
    double a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    switch(x)
    {
        case 1: cout<<"The sum is: "<<a+b<<endl;
        break;
        case 2: cout<<"The difference is: "<<a-b<<endl;
        break;
        case 3: cout<<"The product is: "<<a*b<<endl;
        break;
        case 4: if(b!=0)
                {
                    cout<<"The quotient is: "<<a/b<<endl;
                }
                else
                {
                    cout<<"Division by zero is not allowed."<<endl;
                }
        break;
        default: cout<<"Invalid choice."<<endl;
    }
    return 0;
}