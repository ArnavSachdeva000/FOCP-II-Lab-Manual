/*Q20. A board displays reverse seating layouts for events. Implement a solution to print:
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5*/
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows: ";
    cin>>a;
    for(int i=0;i<a;i++){
        for(int j=5;j>i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}