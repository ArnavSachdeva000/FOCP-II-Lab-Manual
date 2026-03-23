/*Q19. A network security system generates prime numbers in a range for encryption key pools. Implement a
solution to find all prime numbers within a given range.*/
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the range (start end): ";
    cin>>a>>b;
    cout<<"Prime numbers in the range "<<a<<" to "<<b<<" are: ";
    for(int i=a;i<=b;i++){
        if(i<2) continue;
        int x=0;
        for(int j=2;j<=i/2;j++){
            if (i%j==0) {x=1; break;}
        }
        if(x==0) cout<<i<<" "<<endl;
    }
}