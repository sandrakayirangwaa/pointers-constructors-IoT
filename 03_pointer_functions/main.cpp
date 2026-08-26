#include <iostream>
using namespace std;

void doubleByValue(int num) {
    num = num * 2;
}

void doubleByPointer(int* numPtr) {
    *numPtr = (*numPtr) * 2;
}

void swapByPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int myNum = 10;

    cout << "Testing Double Functions\n";
    cout << "Starting value: " << myNum << "\n\n";

    cout << "Before doubleByValue: " << myNum << "\n";
    doubleByValue(myNum);
    cout << "After doubleByValue:  " << myNum << " (No change!)\n\n";

  
    cout << "Before doubleByPointer: " << myNum << "\n";
    doubleByPointer(&myNum); 
    cout << "After doubleByPointer:  " << myNum << " (It doubled!)\n\n";

    cout << "Testing Swap Function\n";
    int x = 5, y = 99;
    cout << "Before swap: x = " << x << ", y = " << y << "\n";
    swapByPointer(&x, &y);
    cout << "After swap:  x = " << x << ", y = " << y << "\n";

    return 0;
}
