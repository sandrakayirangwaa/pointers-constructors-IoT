#include <iostream>
using namespace std;

int main() {
    int localVariable = 42;
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int* heapArray = new(nothrow) int[size];

    if (heapArray == nullptr) {
        cout << "Error: Memory allocation failed!" << endl;
        return 1; 
    }

    cout << "\nAddress Comparison" << endl;
    cout << "Address of local variable (Stack): " << &localVariable << endl;
    cout << "Address of dynamic array (Heap):  " << heapArray << endl;

    cout << "\nFilling and Printing Heap Array" << endl;
    for (int i = 0; i < size; i++) {
        heapArray[i] = (i + 1) * 10; 
        cout << "heapArray[" << i << "] = " << heapArray[i] << endl;
    }

    cout << "\nRelease Tracking" << endl;
    cout << "Pointer value BEFORE delete[]: " << heapArray << endl;

    delete[] heapArray;

    cout << "Pointer value AFTER delete[]:  " << heapArray << endl;

    heapArray = nullptr; 

    return 0;
}
