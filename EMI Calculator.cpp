#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateEMI(double P, double R = 0.01, int T = 12) {
    return (P * R * pow(1 + R, T)) / (pow(1 + R, T) - 1);
}

int main() {
    double P, R;
    int T;
    if (cin >> P) {
        if (cin >> R >> T) {
            cout << fixed << setprecision(2) << calculateEMI(P, R, T) << "\n";
        } else {
            cout << fixed << setprecision(2) << calculateEMI(P) << "\n";
        }
    }
    return 0;
}