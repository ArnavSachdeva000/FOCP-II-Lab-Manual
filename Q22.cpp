/* Q22. A jewelry design tool generates hollow diamond outlines for patterns. Implement a solution to display a
hollow diamond pattern of * */
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of rows: ";
    cin >> a;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = a - 1; i >= 1; i--) {
        for (int j = 1; j <= a - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
