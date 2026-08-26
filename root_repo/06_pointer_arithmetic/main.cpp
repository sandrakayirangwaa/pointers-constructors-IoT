#include <iostream>
using namespace std;

void checkSize(int* ptr) {
    cout << "Size of pointer inside function: " << sizeof(ptr) << " bytes\n";
}

int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};
    cout << "Loop 1: Index Loop\n";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    cout << "Loop 2: Pointer Loop\n";
    int* p = arr; 
    for (int i = 0; i < 6; i++) {
        cout << *p << " ";
        p++; 
    }
    cout << "\n\n";

    cout << "Address Comparison\n";
    for (int i = 0; i < 6; i++) {
        cout << "Index &arr[" << i << "]: " << &arr[i] 
             << "  |  Pointer Math (arr + " << i << "): " << (arr + i) << "\n";
    }
    cout << "\n";

    cout << "Size Differences\n";
    cout << "Size of array in main: " << sizeof(arr) << " bytes\n";
    checkSize(arr);

    return 0;
}
