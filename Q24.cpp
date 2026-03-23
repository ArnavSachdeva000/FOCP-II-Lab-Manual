/*Q24. A typing practice app displays the alphabets in pyramid form. Implement a solution to display:
A
AB
ABC
ABCD
ABCDE*/
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for (char i = 'A'; i < 'A' + n; i++) {
        for (char j = 'A'; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
