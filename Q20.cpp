/*Q20. A printing press needs to repeat labels in a fixed tabular layout. Implement a solution to display:
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5*/
#include <iostream>
using namespace std;
int main(){
int a;
cout<<"Enter the number of rows: ";
cin>>a;
for(int i=1;i<=a;i++){
    for(int j=1;j<=5;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
}
