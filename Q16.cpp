/* Q16. A cybersecurity tool verifies prime numbers used in encryption keys. Implement a solution to accept a
number and check whether it is prime. */

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
int main(){
    int a,flag=0;
    cout<<"Enter the key: ";
    cin>>a;
    for(int i=2;i<=a/2;i++){
        if (a%i==0) {flag=1; break;}
    }
    if(flag==0) cout<<"Prime";
    else cout<<"Not Prime";
}