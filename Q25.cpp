/*Q25. A security system generates list of prime keys within given range. Implement a solution to display all
prime numbers between two limits.
A web-based application enforces strong password policies during user registration to improve account security.
• The system requires that every password must satisfy the following conditions:
Contain at least one uppercase letter (A–Z)
•
Contain at least one lowercase letter (a–z)
•
Contain at least one digit (0–9)
•
Contain at least one special character from the set
@ # $ % ! & *
You are required to develop the code so that the password validation logic can be implemented in the application.*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string password;
    bool upper = false, lower = false, digit = false,special = false;
    cout <<"Enter your password: ";
    cin >>password;
    for(int i=0; i<password.length();i++){
        char ch = password[i];
        if(ch>='A' && ch<='Z')
            upper=true;
        else if(ch>='a' && ch<='z')
            lower=true;
        else if(ch>='0' && ch<='9')
            digit=true;
        else if(ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='!' || ch=='&' || ch=='*' || ch=='/' || ch==':' || ch==';' )
            special=true;
    }
    if(upper && lower && digit && special) cout << "Password is VALID"<<endl;
    else cout << "Password is INVALID"<<endl;
    return 0;
}