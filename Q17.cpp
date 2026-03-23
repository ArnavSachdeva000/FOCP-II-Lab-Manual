/* Q17. A learning application analyzes numbers for mathematical properties.
Design a solution to check whether a given number is a Perfect number or an Armstrong number. */

#include <iostream>
using namespace std;
int main(){
    int a,add=0,x,r;
    cout<<"Enter the number: ";
    cin>>a;
    x=a;
    while(x!=0){
        r=x%10;
        add+=r*r*r;
        x/=10;
    }
    if(add==a) cout<<"Armstrong";
    else cout<<"Not Armstrong";
}