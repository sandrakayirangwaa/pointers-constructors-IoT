# Task 7: Dynamic Memory (Explanation)

### 1. Comparing Stack vs Heap Addresses
The address of the local variable (Stack) and the dynamic array (Heap) are completely different numbers and sit extremely far apart in memory. 
* The **Stack** address usually looks like a very large number (e.g., starting with `0x7ff...`) because it grows downward from the top of the memory.
* The **Heap** address looks much smaller (e.g., starting with `0x55...` or `0x60...`) because it sits in a totally different system zone designed for dynamic, manual allocations.

### Terminal Output
```text
Enter the size of the array: 3

Address Comparison
Address of local variable (Stack): 0x7ffe5e29ed74
Address of dynamic array (Heap):  0x5fd928fb2ad0

Filling and Printing Heap Array
heapArray[0] = 10
heapArray[1] = 20
heapArray[2] = 30

Release Tracking
Pointer value BEFORE delete[]: 0x5fd928fb2ad0
Pointer value AFTER delete[]:  0x5fd928fb2ad0
```
### 2. What the Pointer Holds After Release
Directly after calling `delete[]`, the pointer variable still holds the exact same memory address numbers as it did before. The `delete` command does not erase or clear out the pointer itself; it just tells the system that the memory block at that address is now free to be used by other programs.

### 3. Why Using the Pointer After Release is a Mistake
Using the pointer after running `delete[]` creates what is called a **Dangling Pointer**. It is a major bug because:
* You are reading or overwriting memory that you no longer own.
* It can cause the program to crash instantly with a segmentation fault.
* If another program or function takes over that spot, you might accidentally corrupt that other program's data.
