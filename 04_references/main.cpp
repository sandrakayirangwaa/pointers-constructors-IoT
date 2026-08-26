#include <iostream>
using namespace std;

void doubleByReference(int& numRef) {
    cout << "Address inside function: " << &numRef << "\n";
    numRef = numRef * 2;
}

void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int myNum = 10;

    cout << "Testing Double Reference\n";
    cout << "Address in main:         " << &myNum << "\n";
    
    cout << "Before double: " << myNum << "\n";
    doubleByReference(myNum);
    cout << "After double:  " << myNum << "\n\n";

    cout << "Testing Swap Reference\n";
    int x = 5, y = 99;
    cout << "Before swap: x = " << x << ", y = " << y << "\n";
    swapByReference(x, y);
    cout << "After swap:  x = " << x << ", y = " << y << "\n";

    return 0;
}
