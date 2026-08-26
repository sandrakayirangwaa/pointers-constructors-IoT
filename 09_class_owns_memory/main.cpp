#include <iostream>
using namespace std;

class MemoryBox {
public:
    int* ptr; 

    MemoryBox() {
        ptr = new int; 
        *ptr = 100;
        cout << "Memory allocated on the heap!" << endl;
    }

    ~MemoryBox() {
        delete ptr;
        cout << "Memory freed safely to prevent leaks!" << endl;
    }
};

int main() {
    cout << "Opening a code block" << endl;
    {
        MemoryBox box; 
        cout << "Value inside heap: " << *box.ptr << endl;
    } 
    cout << "Closed code block" << endl;

    return 0;
}
