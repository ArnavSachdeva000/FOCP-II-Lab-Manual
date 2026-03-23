#include<iostream>

using namespace std;

void centtofah(double x)
{
double y;
y= (x*1.8)+32;
cout<<"The temprature in Fehrenheit is: "<<y<<endl;

}
void fahtocent(double x)
{
    	double y;
y = (x - 32) / 1.8;
cout<<"The temprature in Centigrade is: "<<y<<endl;
}
int main()
{
    int a;
    cout<<"Enter 1 if you want to convert Fahrenheit temperature to Centigrade. Enter 2 if you want to convert Centigrade Temprature to Fahrenheit."<<endl<<"Enter yor input: ";

    cin>>a;
    double b;
    if(a==1)
    { 
        cout<<"Enter the temprature in Fahrenheit: ";
        cin>>b;
        fahtocent(b);
    }
    else if(a==2)
    {     cout<<"Enter the temprature in Centigrade: ";
        cin>>b;
        centtofah(b);
    }
    else
    {cout<<"Invalid Input.";}
    return 0;
}