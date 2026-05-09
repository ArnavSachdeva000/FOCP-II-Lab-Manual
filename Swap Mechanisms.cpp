#include <iostream>

using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    if (cin >> a >> b) {
        swapByValue(a, b);
        cout << a << " " << b << "\n";
        
        swapByReference(a, b);
        cout << a << " " << b << "\n";
    }
    return 0;
}