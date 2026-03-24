/*Q34. A graphics rendering engine adds pixel intensity matrices. Implement a solution to store two
3×3 matrices and compute their sum.*/
#include<iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], c[3][3];
    cout << "Enter values for first 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter values for second 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "Sum of the two matrices:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}