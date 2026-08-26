# Task 3: Functions with Pointers (Explanation)

### What did the by-value function actually receive?
The function `doubleByValue(int num)` received a **brand-new copy** of the variable's value, stored in a completely separate memory location. 

### Terminal Output
```text
Testing Double Functions
Starting value: 10

Before doubleByValue: 10
After doubleByValue:  10 (No change!)

Before doubleByPointer: 10
After doubleByPointer:  20 (It doubled!)

Testing Swap Function
Before swap: x = 5, y = 99
After swap:  x = 99, y = 5
```
### Why one changed nothing and the other did:
* **By Value:** Because it only works on a duplicate copy, multiplying it by 2 changes the copy inside the function but leaves the original variable in `main()` completely untouched.
* **By Pointer:** The function `doubleByPointer(int* numPtr)` received the **exact memory address** of our variable. By using the asterisk (`*`), it goes directly to that exact spot in RAM and updates the original number. 

### How the Swap works:
The swap function takes the memory locations of two variables. It saves the value of the first variable in a temporary backup container (`temp`), moves the second value into the first slot, and then grabs the backup value to fill the second slot. Because we used pointers, this swap happens globally.
