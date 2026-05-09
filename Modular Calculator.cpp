#include <iostream>

using namespace std;

void addition(double a, double b) { cout << a + b << "\n"; }
void subtraction(double a, double b) { cout << a - b << "\n"; }
void multiplication(double a, double b) { cout << a * b << "\n"; }
void division(double a, double b) { 
    if (b != 0) cout << a / b << "\n"; 
}

int main() {
    int choice;
    double a, b;
    if (cin >> choice >> a >> b) {
        switch(choice) {
            case 1: addition(a, b); break;
            case 2: subtraction(a, b); break;
            case 3: multiplication(a, b); break;
            case 4: division(a, b); break;
        }
    }
    return 0;
}   