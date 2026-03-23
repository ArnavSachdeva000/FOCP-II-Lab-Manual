#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c,x1,x2;
    cout<<"Enter coefficients of the quadratic equation (a, b, c): ";
    cin>>a>>b>>c;
    if(a == 0)
{
    cout<<"Not a quadratic equation."<<endl;
}
else{
    float D=b*b- 4*a*c;
    if(D>0){
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout<<"Roots are real and distinct."<<endl;
        cout<<"First root = "<<x1<<endl<<"Second root = "<<x2<<endl;
    }   
    else if(D==0){
        x1=-b/(2*a);
        cout << "Roots are real and same."<<endl;
        cout << "First root = Second root = "<<x1<<endl;
    }
    else cout<<"Roots are imaginary."<<endl;
}return 0;
}
