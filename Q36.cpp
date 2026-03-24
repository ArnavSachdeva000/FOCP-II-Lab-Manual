/*Q36. A machine learning model multiplies matrices for neural network layers. Implement a solution
to multiply two matrices of order m×n and p×q (if valid).*/
#include<iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cout << "Enter dimensions of first matrix (m n): ";
    cin >> m >> n;
    cout << "Enter dimensions of second matrix (p q): ";
    cin >> p >> q;

    if(n != p) {
        cout << "Matrix multiplication not possible. Number of columns in first matrix must equal number of rows in second matrix." << endl;
        return 0;
    }

    int a[m][n], b[p][q], c[m][q];
    
    cout << "Enter values for first matrix:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter values for second matrix:\n";
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            cin >> b[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            c[i][j] = 0;
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            for(int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "Result of matrix multiplication:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}