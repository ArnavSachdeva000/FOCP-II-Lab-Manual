/*Q26. The school report card system stores subject marks for each student.
Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.*/
#include<iostream>
using namespace std;
int main(){
    float marks[5],total = 0,percentage;
    cout <<"Enter marks in 5 subjects: ";
    for(int i=0; i<5; i++){
        cin>>marks[i];
        total+=marks[i];
    }
    percentage=(total/500)*100;
    cout<<"Total: "<<total<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    return 0;
}