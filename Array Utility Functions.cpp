#include <iostream>

using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

double average(int arr[], int size) {
    if (size == 0) return 0.0;
    return static_cast<double>(sumArray(arr, size)) / size;
}

bool contains(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) return true;
    }
    return false;
}

int main() {
    int n;
    if (cin >> n && n > 0) {
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        
        cout << sumArray(arr, n) << "\n";
        cout << average(arr, n) << "\n";
        
        if (contains(arr, n, key)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
        delete[] arr;
    }
    return 0;
}