#include <iostream>

using namespace std;

void findMinMax(int arr[], int size, int &minVal, int &maxVal) {
    if (size <= 0) return;
    minVal = arr[0];
    maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
}

int main() {
    int n;
    if (cin >> n && n > 0) {
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int minVal, maxVal;
        findMinMax(arr, n, minVal, maxVal);
        cout << minVal << "\n" << maxVal << "\n";
        delete[] arr;
    }
    return 0;
}