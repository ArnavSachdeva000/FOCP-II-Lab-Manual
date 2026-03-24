/*Q28. A data processing system classifies even and odd inputs separately. Implement a solution to
store 5 elements in an array, compute sum of all even and sum of all odd numbers.*/
#include<iostream>
using namespace std;
int main(){
    int array[5],x=0,y=0;
    cout <<"Enter 5 numbers: ";
    for(int i=0;i<5;i++){
        cin>>array[i];
        if(array[i]%2==0) x+=array[i];
        else y+=array[i];
    }
    cout<<"Sum of even numbers: "<<x<<endl;
    cout<<"Sum of odd numbers: "<<y<<endl;
    return 0;
}