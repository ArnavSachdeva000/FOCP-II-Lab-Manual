/*Q29. A weather monitoring app records 30-day temperature logs. Implement a solution to store daily
temperatures in an array and display the minimum temperature for the month.*/
#include<iostream>
using namespace std;
int main(){
    float array[30], x;
    cout <<"Enter daily temperatures for 30 days: ";
    for(int i=0; i<30; i++){
        cin>>array[i];
    }
    x=array[0];
    for(int i=1; i<30; i++){
        if(array[i]<x)
            x=array[i];
    }
    cout<<"Minimum temperature for the month: "<<x<<endl;
    return 0;
}