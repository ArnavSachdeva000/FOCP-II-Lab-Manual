#include <iostream>

using namespace std;

void callCounter() {
    static int count = 0;
    count++;
    cout << count << "\n";
}

int main() {
    callCounter();
    callCounter();
    callCounter();
    return 0;
}