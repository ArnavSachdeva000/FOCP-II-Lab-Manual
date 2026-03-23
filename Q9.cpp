/* Q9. A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a
solution to classify the symbol. */
#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a symbol: ";
    cin>>a;
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        cout<<"The symbol is a vowel."<<endl;
    }
    else if((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
        cout<<"The symbol is a consonant."<<endl;
    }
    else if(a>='0' && a<='9')
    {
        cout<<"The symbol is a number."<<endl;
    }
    else
    {
        cout<<"The symbol is not an alphabet or number."<<endl;
    }
    return 0;
}