/* Q18. A String-matching tool validates if IDs are palindromes. Implement
a solution to check whether a given ID is a palindrome. */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string id;
    cout<<"Enter ID: ";
    cin>>id;
    bool check= true;
    int st=0;
    int end=id.length()-1;
    while (st<end) {
        if (id[st] !=id[end]) {
            check=false;
            break;
        }
        st++,end--;
    }
    if (check) cout<<"ID is a palindrome.";
    else cout<<"ID is NOT a palindrome.";

}