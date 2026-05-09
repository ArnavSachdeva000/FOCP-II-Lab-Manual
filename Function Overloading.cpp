#include <iostream>

using namespace std;

double area(double radius) {
    return 3.14159265358979323846 * radius * radius;
}

double area(double length, double breadth) {
    return length * breadth;
}

float area(float base, float height) {
    return 0.5f * base * height;
}

int main() {
    int choice;
    if (cin >> choice) {
        if (choice == 1) {
            double radius;
            cin >> radius;
            cout << area(radius) << "\n";
        } else if (choice == 2) {
            double length, breadth;
            cin >> length >> breadth;
            cout << area(length, breadth) << "\n";
        } else if (choice == 3) {
            float base, height;
            cin >> base >> height;
            cout << area(base, height) << "\n";
        }
    }
    return 0;
}