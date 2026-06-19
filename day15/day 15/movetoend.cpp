#include <iostream>
using namespace std;

void moveZeroesToEnd(int arr[], int n) {
    int count = 0; // Count of non-zero elements
    
    // Traverse the array and place non-zero elements at the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    moveZeroesToEnd(arr, n);
    
    cout << "Array after pushing all zeros to end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}   